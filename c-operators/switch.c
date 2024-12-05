#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {
    int day = -1;
    printf("what is the current day?\n");
    scanf("%d", &day);

    // in c lang you can use only integers in switch statement
    switch (day)
    {
    case 0:
        printf("Saturday\n");
        break;
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    default:
        printf("No such day!\n");
    }
    return 0;    
}