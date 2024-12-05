#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {
    int r1, r2, r3, r4;
    // and operator
    // rules at the level of bits of the binary representation
    r1 = 9 & 5;
    // 9 = 1001
    // 5 = 0101 &
    // ----------
    // 1 = 0001

    r2 = 9 | 5;
    // or operator
    // 9 = 1001
    // 5 = 0101 |
    // ----------
    // 13 = 1101

    r3 = 9 ^ 5;
    // execlusive or ^
    // 9 = 1001
    // 5 = 0101 ^
    // ----------
    // 12 = 1100

    r4 = ~9;
    // not operator ~
    // 55 = 0000 0000 0000 0000 0000 0000 0101
    // ----------
    // ~5 = 1111 1111 1111 1111 1111 1111 1010

    printf("& and: %d\n", r1);
    printf("| or: %d\n", r2);
    printf("^ execlusive or: %d\n", r3);
    printf("~ not: %d\n", r4);

    return 0;
}