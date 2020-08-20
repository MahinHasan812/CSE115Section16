//Take an integer n as input from the user. Write a program that
// displays the Fibonacci series up to nth term.

#include <stdio.h>
int main()
{
    int a, b, c, i, terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms: \n");

    for(i=1; i<=terms; i++)
    {
        printf("%d, ", c);

        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}
