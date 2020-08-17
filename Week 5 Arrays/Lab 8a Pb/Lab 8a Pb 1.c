//Write a function that returns the number of times a value (key) appears in an array.

#include<stdio.h>
int countSearchKey(int aee[], int size, int key);
int main()
{
    int i, array_size, key, result, search;
    printf("Enter array size:");
    scanf("%d", &array_size);
    printf("Array Elrments");
    int ele[array_size];
    for(i=0; i<array_size; i++)
        scanf("%d", &ele[i]);
    printf("Search key:");
    scanf("%d", &search);
    result= countSearchKey(ele, array_size, search);
    printf("Search key appears %d times", result);
    return 0;
}
int countSearchKey(int arr[], int size, int key)
{
    int i, count=0;
    for(i=0; i<size; i++)
    {
        if(arr[i]==key)
            count++;
    }
    return count;
}
