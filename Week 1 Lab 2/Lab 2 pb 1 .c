// Write a program to find the average of five numbers. Take all the numbers from user as input. (Enter 5 numbers: 4  8  2  1  5 )
#include<stdio.h>
int main()
{
int num;
int sum,i;
float average;
printf("Enter five numbers:");
for(i=0; i<5; i++){
scanf("%d",&num);
sum=sum+num;
}
average=sum/(float)5;
printf("Average=%.5f",average);
return 0;
}
