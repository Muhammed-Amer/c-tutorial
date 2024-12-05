#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {
    unsigned int a = 20;

    // left shift
    // a << n == a * 2^n 
    printf("a lift shifted by 1: %d\n", a << 2);

    // right shift
    // a << n == a / 2^n 
    printf("a right shifted by 1: %d\n", a >> 2);

    unsigned int b = 5;
    for(int i=0; i<10; i++) {
        printf("Left shifted by %d: %d\n", i, b << i);
        // 5 * 2^0 ==>  0101
        // 5 * 2^1 ==>  1010
        // 5 * 2^2 ==> 10100
        // 5 * 2^3 ==> 
        // 5 * 2^4
        // ...
    }
    return 0;    
}