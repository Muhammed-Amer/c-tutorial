#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    // ternary operator
    int max = a > b ? a : b;

    // if(a>b) {
    //     max = a;
    // } else {
    //     max = b;
    // }

    printf("The max Value: %d\n", max);
    return 0;
}