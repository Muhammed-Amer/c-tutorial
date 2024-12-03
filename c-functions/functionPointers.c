#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int sum(int a, int b) {
    return a + b;
}

int prod(int a, int b) {
    return a * b;
}

void shouldNotBeChanged(int (*operation)(int, int)) {
    srand(time(NULL));
    int a = rand() % 100;
    int b = rand() % 100;
    printf("the result fo the operatoin of %d and %d is %d\n",a, b, operation(a, b));
}

int main(int argc, char* argv[]) {
    shouldNotBeChanged(&sum);
    shouldNotBeChanged(&prod);
    return 0;
}