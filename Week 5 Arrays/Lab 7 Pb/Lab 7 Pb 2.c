//Write a program that takes 5 integers as input, stores them in an array
//and finds the highest number in the array

#include<stdio.h>
int main()
{
    int i, j, arr[5], temp=0;
    printf("Enter array Elements: ");
    for(i=0; i<5; i++)
        scanf("%d", &arr[i]);
    for(j=0; j<5; j++)
    {
        if(arr[j]>temp)
            temp=arr[j];
    }
    printf("Largest element:%d", temp);
    return 0;
}
