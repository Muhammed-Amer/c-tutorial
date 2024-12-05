#include<stdio.h>
#include<stdlib.h>

int incrementPointerValue(int* p) {
    *(p)++;
    return *p;
}

int main(int argc, char* argv[]) {
    // size_t => 64 bit unsigned integer
    // %llu or %zu for large numbers
    printf("the size of int: %zu\n", sizeof(int));

    int arr[] = {1, 2, 3}; // -> int* = 8 bytes
    printf("the number of elements at the array: %zu\n", sizeof(arr) / sizeof(int));

    // these 2 lines give the same result
    // sizeof() function returns a size_t which is 8 bytes what ever inside it
    printf("%zu\n", sizeof(sizeof(int)));
    printf("%zu\n", sizeof(size_t));

    printf("----------------\n");

    int x = 5;
    printf("size of x: %zu\n", sizeof(incrementPointerValue(&x)));
    printf("size of x: %d\n", x);

    // why we don't get the incremented value?
    // sizeof is a compile time operator
    // when we "compile" the program the sizeof(x) turns to 4
    // sizeof() does not execute the expression from inside
    // in summary: whatever inside the sizeof function does not get executed
    return 0;
}