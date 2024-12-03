#define SUM2(...) (sum2(__VA_ARGS__, 0))
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

// variadic function is a function that can take any number of parameters
// we have to include stdarg.h to deal with these parameters
int sum(int count, ...) {
    va_list args;
    // we have to initialize this va_list
    va_start(args, count);

    int s = 0;
    int i;
    
    for(i=0; i<count; i++) {
        int x = va_arg(args, int);
        // the next time it will give you the next 4 bytes
        s += x;
    }
    va_end(args);
    return s;
}

// common practice
int sum2(int a, ...) {
    va_list args;
    va_start(args, a);

    int s = a;
    int x = va_arg(args, int);
    while(x != 0) {
        s += x;
        x = va_arg(args, int);
    }
    va_end(args);
    return s;
}


int main(int argc, char* argv[]) {
    // you should but the null terminator as the last argument
    int result = SUM2(1, 2, 3, 5);
    printf("the result: %d\n", result);
    return 0;
}   