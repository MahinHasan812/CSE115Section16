//1. Write a C program that takes an integer as input and tests if it is positive or negative.

#include<stdio.h>
int main()
{
    int n;
    printf("Input a number:");
    scanf("%d",&n);
    if(n>0){
        printf("The number is positive\n");
    }
    else{
        printf("The number is negtive\n");
    }
    return 0;
}
