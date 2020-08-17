// Write a function that searches for value (key) in an array
// of size defined by the user. The function should print “Found”
// if the element is in the array and “Not found” otherwise.

#include<stdio.h>
void search(int arr[], int size, int key);
int main()
{
    int i, array_size, key, result, find;
    printf("Enter array size:");
    scanf("%d", &array_size);
    printf("Array Element:");
    int ele[array_size];
    for(i=0; i<array_size; i++)
        scanf("%d", &ele[i]);
    printf("Search key:");
    scanf("%d", &find);
    search(ele, array_size, find);
    return 0;
}
void search (int arr[], int size, int key)
{
    int i, ans = 0;
    for(i=0; i<size; i++)
    {
        if(arr[i]==key)
            ans=1;
    }
    if (ans==1)
        printf("Found");
    else
        printf("Not found");
}
