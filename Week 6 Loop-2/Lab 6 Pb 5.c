//Write a program that prints a pyramid of asterisks as shown below.
//The number of lines in the pyramid is an integer provided by the user as input.

#include <stdio.h>

void main()
{
   int i,j,n;
   printf("Input number of rows for this pattern :");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
     for(j=1;j<=n-i;j++)
     printf(" ");
     for(j=1;j<=2*i-1;j++)
       printf("*");
     printf("\n");
   }

}
