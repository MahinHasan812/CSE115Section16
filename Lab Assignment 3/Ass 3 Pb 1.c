//Write a program to print the odd and even numbers of an array.

#include<stdio.h>
#define max_size 100
int main()
{
        int arr[max_size];
        int i, num;
        printf("Enter the size of an array: \n");
        scanf("%d", &num);
        printf("Enter the elements of the array: \n");
        for (i = 0; i < num; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Even numbers in the array are: ");
        for (i = 0; i < num; i++)
        {
            if (arr[i] % 2 == 0)
            {
                printf("%d \t", arr[i]);
            }
        }
        printf("\n Odd numbers in the array are: ");
        for (i = 0; i < num; i++)
        {
            if (arr[i] % 2 != 0)
            {
                printf("%d \t", arr[i]);
            }
        }
        return 0;
    }
