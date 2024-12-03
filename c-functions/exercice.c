#include<stdio.h>
#include<stdlib.h>

// sum the even numbers from 0 to n;
int summOfEven(int n) {
    if(n <= 1) {
        return 0;
    } else{
        if(n % 2 == 0) {
            return n + (n-2);
        } else {
            return n-1 + (n-3); 
        }
    }
}

int main(int argc, char* argv[]) {
    int result = summOfEven(5);
    printf("the sum of even numbers: %d\n", result);
}