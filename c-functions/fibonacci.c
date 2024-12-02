#include<stdio.h>
#include<stdlib.h>

int fibo(int k) {
    int n1, n2, x;
    int i;
    
    n1 = 0;
    n2 = 1;
    
    if(k == 1) {
        printf("The %dSt number: %d\n",k, n1);
        return n1;
    }
    for(i=0; i< k - 2; i++) {
        x = n2;
        n2 = n1 + n2;
        n1 = x;
    }

    printf("The %dTh number: %d\n",k, n2);
    return n2;
}

int main(int argc, char* argv[]) {
    // 0, 1, 1, 2, 3, 5, 8, 13 -> fibonacci series
    int r = fibo(1);
    return 0;
}