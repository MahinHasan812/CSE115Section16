//1. Write a program to find the average of five numbers. Take all the numbers from user as input.(Enter 5 numbers: 4.1  8.2  2  1.3  5.5 )
#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    float sum,ave;
    printf("input five numbers:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    ave=sum/5;
    printf("The average:%f",ave);
    return 0;
}
