//Write a program to add two complex numbers using structure.
//Create a structure called Complex with two components, real
//and imag. Write a function that takes two structure variables
//as input, then sum up the two complex number.


#include <stdio.h>

struct Complex{
    float real;
    float imag;
};

struct Complex add(struct Complex n1, struct Complex n2){
    struct Complex n3;
    n3.real = n1.real+n2.real;
    n3.imag = n1.imag+n2.imag;

    return n3;
}

int main()
{
    struct Complex a, b, c;
    int p, area;
    scanf("%f %f", &a.real, &a.imag);
    scanf("%f %f", &b.real, &b.imag);
    c = add(a, b);
    printf("%f %f", c.real, c.imag);

    return 0;
}
