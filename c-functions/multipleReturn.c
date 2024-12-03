#include<stdio.h>
#include<stdlib.h>

int sumAndProduct(int a, int b, int* sum, int* prod) {
    if(sum == NULL || prod == NULL) {
        return 0;  
    }

    *sum = a+b;
    *prod = a*b;

    return 1;
}

int main(int argc, char* argv[]) {
    // a, b => a+b and a*b
    int x = 5, y = 10, sum, prod;
    int status = sumAndProduct(x, y, NULL, &prod);

    if(status == 0) {
        printf("Something went Wrong!\n");
    } else {
        printf("sum: %d and prod: %d\n", sum, prod);
    }

    return 0;
}