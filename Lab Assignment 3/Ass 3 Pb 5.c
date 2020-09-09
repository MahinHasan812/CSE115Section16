//Write a program which will take an array as input from user
//(or hard coded inside program), later it will take another
//two inputs: firstly, the position of an element and then the
//element. The position should be within the range of the size
//of the array. The new input will later replace the existing
//number in array at the index/position.

#include <stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int input;
    scanf("%d",&input);

    int original_arr[input];
    printf("\nEnter the elements of the array: \n");

    int i;
    for(i=0; i<input; i++)
        scanf("%d",&original_arr[i]);
    printf("\nEnter the index/position of the element in the array: \n");

    int position;
    scanf("%d",&position);

    int element;
    printf("\nEnter the element for replacing the existing number in array at the index/position: \n");
    scanf("%d",&element);

    original_arr[position]=element;

    printf("\nThe new array after replacing with the new element: \n");
    for(i=0; i<input; i++)
        printf("%d ",original_arr[i]);

    printf("\n");

    return 0;
}
