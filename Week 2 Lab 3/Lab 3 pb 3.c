//3. Write a program to check a number whether it's even or odd.
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:\a");
    scanf("%d",&a);
    if(a%2==0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
    return 0;
}
