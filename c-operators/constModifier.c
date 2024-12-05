#include<stdio.h>
#include<stdlib.h>

// i don't want the actual parameter to be changed through my function call
int add(const int x, const int y) {
    // you can't change x, y here
}

int main(int argc, char* argv[]) {
    int m = 50, n = 60;
    // const int* number_of_elements = &m;

    int* const number_of_elements = &m; // const pointer, the address can never be changed
    // but the value itself is not a constant
    *number_of_elements = 90;

    // we can make const pointer to a const int
    const int* const final_number = &m;

    // final_number = 90; => the value can never be changed
    // final_number = &n;

    // printf("number of elements: %d\n", *number_of_elements);
    // number_of_elements = &n;
    // printf("number of elements: %d\n", *number_of_elements);

    // a pointer to const character
    // this character can never be changed    
    const char* str = "amer";
    // str[0] = m;

}