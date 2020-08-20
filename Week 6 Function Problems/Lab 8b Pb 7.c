//Write a program to draw a rocket ship (which is a triangle over a rectangle,
//over an inverted V), a male stick figure (a circle over a rectangle over an
//inverted V), and a female stick figure (a circle over a triangle over an inverted V

#include<stdio.h>
void triangle(void);
void rectangle(void);
void invertedV(void);
void circle(void);
void rocket(void);
void male(void);
void female(void);
int main(void)
{
    printf(" Rocket:\n");
    rocket();
    printf("\n\n");

    printf(" Male:\n");
    male();
    printf("\n\n");

    printf(" Female:\n");
    female();
    printf("\n\n");

    return 0;
}
void triangle(void)
{
    printf("   *\n");
    printf("  *  *\n");
    printf(" *    *\n");
    printf("********\n");
}
void rectangle(void)
{
    printf(" ******\n");
    printf(" *    *\n");
    printf(" *    *\n");
    printf(" *    *\n");
    printf(" ******\n");
}
void invertedV(void)
{
    printf("   *\n");
    printf("  *  *\n");
    printf(" *    *\n");
    printf("*      *\n");
}
void circle(void)
{
    printf("   **\n");
    printf(" *    *\n");
    printf(" *    *\n");
    printf("   **\n");
}

void rocket(void)
{
    triangle();
    rectangle();
    invertedV();
}
void male(void)
{
    circle();
    rectangle();
    invertedV();
}
void female(void)
{
    circle();
    triangle();
    invertedV();
}
