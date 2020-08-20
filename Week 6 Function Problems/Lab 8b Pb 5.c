//Write a function (suggested prototype is int fibonacci (int n) )
//that will return the n-th Fibonacci number. Assume that the first
//Fibonacci number is 0 and the second is 1.

#include<stdio.h>
 int fibonacci (int n)
 {
   int x=0, y=1, z;
   for(int i=0; i<n; i++)
   {
     printf("%d ", x);
     z = x+y;
     x = y;
     y = z;
   }
   printf("\n");
 }

 int main()
 {
   int n;

   printf("Enter num of term: ");
   scanf("%d", &n);
    printf("fibonacci series is: \n");
   fibonacci(n);
    return 0;
 }
