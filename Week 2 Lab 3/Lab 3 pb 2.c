//2. Write a C program that takes an integer as an input and determines whether it is a multiple of 7 or not.

#include<stdio.h>
int main()
{
    int a;
    printf("input a number:\a");
    scanf("%d",&a);
    if(a%7==0){
        printf("The number is multiple to 7");
    }
    else{
        printf("The number is not multiple to 7");
    }
    return 0;
}
