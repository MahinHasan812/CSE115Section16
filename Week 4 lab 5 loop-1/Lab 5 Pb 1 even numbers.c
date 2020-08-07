//Write a program to show all the even numbers between 0 and 100 inclusive

#include <stdio.h>

int main() {
	int i;
	printf("Even numbers between 0 to 100 (inclusive) :\n");
	for (i = 1; i <= 100; i++)
	{
		if(i%2 == 0)
		{
		  printf("%d ", i);
		}
	}
	return 0;
}
