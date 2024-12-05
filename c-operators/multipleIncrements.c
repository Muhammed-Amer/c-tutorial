#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {
    int a = 0;
    // undefined behaviour
    // don't do that
    // don't depend on the compiler to evaluate this value at the run time
    // each c compiler has its own order of evaluating expression 
    // might give you 4, 5, 6

    // printf("%d\n", ++a + ++a - ++a + a++);
    // a = 1, 2, 3, 4
    // output = 1 + 2 - 3 + 3 = 3 

    int temp1 = ++a; // a becomes 1, temp1 = 1
    int temp2 = ++a; // a becomes 2, temp2 = 2
    int temp3 = ++a; // a becomes 3, temp3 = 3
    int temp4 = a++; // temp4 = 3, a becomes 4
    
    printf("%d\n", temp1 + temp2 - temp3 + temp4); // Now correct
    return 0;    
}