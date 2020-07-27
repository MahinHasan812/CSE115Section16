// {Write a program that finds the height and area of a right triangle.
//Take hypotenuse and base as input from the user. Use pow() and sqrt() function. Enter base: 3  Enter hypotenuse: 5 }

#include<stdio.h>
#include<math.h>
int main()
{
    int base,hy;
    float H,A;
    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter hypotenuse:");
    scanf("%d",&hy);
    H=sqrt(pow(hy,2)-pow(base,2));
    A=(H*base)/2;
    printf("Height is %0.2f\nArea is %0.2f\n",H,A);
    return 0;
}
