//In the following problem, an integer a is given as input.
// You have to find out the sum of the following expression-
// a2 - (a-1)2 + (a-2)2 - (a-3)2 + (a-4)2 - ............. +- 1

#include<stdio.h>
#include<math.h>
int main()
{
    int a, i=0, step=0, sign, result;
    printf("Enter an integer value");
    scanf("%d", &a);
    for(i=0; i<a; i++)
    {
        sign=pow(-1, step);
        result=result+sign*pow(a-i,2);
        step++;
    }
    printf("%d", result);
    return 0;
}
