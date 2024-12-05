#include<stdio.h>
#include<stdlib.h>

#define FIRST_FLAG 0b1
#define SECOND_FLAG 0b10
#define EIGHT_FLAG 0b10000000

int main(int argc, char* argv[]) {
    unsigned int flags = FIRST_FLAG | SECOND_FLAG | EIGHT_FLAG; // 32 feature inside it
    // flags = 2;

    // how to disable the first flag
    flags = flags & ~FIRST_FLAG;
    // 10000011
    // 11111110 &
    // --------
    // 10000010

    // enable it again
    flags = flags | FIRST_FLAG;

    int x, y; // 8 bytes
    x = 1;
    y = 0;

    // if the right most digit == 1
    if(flags & FIRST_FLAG) {
        printf("First feature is enabled\n");
    } else {
        printf("First feature is disabled\n");
    }

    // if the second right most digit == 1
    if(flags & SECOND_FLAG) {
        printf("Second feature is enabled\n");
    }

    if(flags & EIGHT_FLAG) {
        printf("8th feature is enabled\n");
    }

    // if(y == 1) {
    //     printf("Second feature is enabled\n");
    // }
    return 0;
}