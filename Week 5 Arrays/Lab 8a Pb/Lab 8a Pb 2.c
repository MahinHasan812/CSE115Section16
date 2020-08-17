//Write a program that computes the sum of a specific column
// (provide by user as input) in a 2D array.

 #include<stdio.h>
 int main()
 {
     int i, j, row, column, search, sum=0;
     printf("Enter number of rows:");
     scanf("%d", &row);
     printf("Enter number of columns:");
     scanf("%d", &column);
     int arr[row][column];
     printf("Enter elements:");
     for(i=0; i<row; i++)
     {
         for(j=0; j<column; j++)
         {
         scanf("%d", &arr[i][j]);
         }
     }
     printf("Enter which column to find sum of:");
     scanf("%d", &search);
     search--;
     for(i=0; i<row; i++);
     sum=sum+arr[i][search];
     printf("Sum of column %d: %d",search+1, sum);
     return 0;
 }
