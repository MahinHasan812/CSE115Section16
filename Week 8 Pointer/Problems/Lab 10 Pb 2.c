//Implement the following function which finds the largest
//element in an array using Dynamic Memory Allocation.

#include<stdio.h>
int max(int *p, int size);
int main()
{
    int i, num;
    int *data, *y;
    printf("Enter array size:");
    scanf("%d", &num);
    data=(int*)calloc(num, sizeof(int));
    if(data==NULL)
    {
        printf("No memory allocated:");
        exit(0);
    }

   for(i=0; i<num; i++)
   {
       printf("Enter the position %d: ", i+1);
       scanf("%d", data);
   }
   y=max(data,num);
   {
   printf("\n\nlargest element:%d\n", *y);
   }
    return 0;
}
int max(int *p, int size)
{
    int i;
    for(i=1;i<size;i++)
    {
        if(*p < *(p+i))
        {
            *p = *(p+i);
        }
    }
    return p;
}
