//Write a program that copies the elements of an array in reverse order to
//another array. At the end the program should be able to print both arrays.

#include<stdio.h>
#define max_size 100
int main()
{
    int arr[max_size], source[max_size];
    int rev[max_size];
    int i, size, revIndex, arrIndex;
    printf("Enter array size:  ");
    scanf("%d", &size);
    printf("Enter array elements:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &source[i]);
    }
    for(i=0; i<size; i++)
    {
        arr[i]=source[i];
    }
    printf("         Array elements: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
    revIndex=0;
    arrIndex=size-1;
    while(arrIndex>=0)
    {
        rev[revIndex]=arr[arrIndex];
        revIndex++;
        arrIndex--;
    }
    printf("\n\nArray in reversed order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", rev[i]);
    }
    return 0;
}
