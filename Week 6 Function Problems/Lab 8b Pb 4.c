//Write a function (suggested prototype is void printStarPyramid (int lines) )
// that prints a pyramid of asterisks as shown below. The function takes the
// number of lines in the pyramid as input

#include <stdio.h>
void printStarPyramid (int lines)
{
    for(int i = 0; i <= lines; i++)
   {
     for(int j = 1;j <= lines-i ;j++)
        printf(" ");
     for(int j = 1 ; j <= 2*i-1; j++)
        printf("*");
     printf("\n");
   }
}

int main()
{
   int lines;
   printf("Enter lines : ");
   scanf("%d",&lines);

   printStarPyramid(lines);
   return 0;
}
