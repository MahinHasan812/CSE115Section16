//Write a function (suggested prototype is int seriesSum1 (int a) )
// that returns the sum of the following expression-
//a2 - (a-1)2 + (a-2)2 - (a-3)2 + (a-4)2 - ............. + 1

#include<stdio.h>
#include<math.h>

int seriesSum1 (int a)
 {
     float c1, c2;
     c1 = 0;
     c2 = 0;

     for (int i = 0; i <= a;i++)
    {
        if(i % 2 == 0)
        {
            c1 = pow((a - i), 2) + c1;
        }
        else
        {
            c2 = pow((a - i), 2) + c2;
        }

    }
    return c1 - c2;
 }


int main()
{
    int a,sum;
    printf("Enter a : ");
    scanf("%d", &a);

    sum = seriesSum1(a);
    printf("\nseries sum: %d", sum);

    return 0;
}
