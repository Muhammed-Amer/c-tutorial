#include<stdio.h>
#include<stdlib.h>
#include<iso646.h> // provides macros to these operators

int main(int argc, char* argv[]) {
    int x = 15;
    if(x >= 10 and x <= 20 or x < 0) {
        printf("result is true\n");
    }

    return 0;
}