#include<stdio.h>
#include<stdlib.h>

void g() {
    printf("Hello from g\n");
}

// you calling the function from itself
int f(int x) {
    // base condition || exit condition
    if(x == 0) {
        return 0;
    }
    printf("Hello from f x = %d\n", x);
    return f(x - 1);
}

// a function that sums up from 1 to n
int sums(int n) {
    if(n <= 0) {
        return 0;
    } else {
        return n + sums(n-1);
    }
}
int main(int argc, char* argv[]) {
    // int result = f(2);
    // f(2) print(2);
    // f(1) print(1);
    // f(0) return 0; resul = 0
    // printf("the result of calling f: %d\n", result);

    int sum = sums(4);
    printf("the result of calling f: %d\n", sum);
    return 0;
}