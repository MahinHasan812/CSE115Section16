//Write the function int computeAverage(int a, int b)
//which takes 2 integers as input and return their average.
//Call the function from main, store the average returned
//by the function and print it.

#include<stdio.h>
int computeAverage(int a, int b)
{
    int c = (a + b)/2;
    return c;
}
int main()
{
    int a,b;
    printf("enter two number: ");
    scanf("%d %d", &a,&b);
    int result =computeAverage(a,b);
    printf("Average = %d\n", result);
    return 0;
}
