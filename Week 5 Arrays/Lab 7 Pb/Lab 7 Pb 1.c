//1. Write a program that takes 5 integers as input, stores them in an array and prints
// them in the reverse order of the input

#include <stdio.h>
int main()
{
    int i, arr[5];
    printf("Enter array elements:");
    for(i=0; i<5; i++)
        scanf("%d", &arr[i]);
    printf("Reversed order:");
    for(i=4; i>=0; i--)
        printf ("%d", arr[i]);
    return 0;
}
