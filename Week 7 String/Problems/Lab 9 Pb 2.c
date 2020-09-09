//Write a function that searches for a character in a string.
//The function should print true if found false otherwise.


#include<stdio.h>
#include<string.h>
void search(char arr[], char key)
{
    char c;
    while (c<arr[c] && key != arr[c]){
        c++;
    }

   if (c < arr[c])
    {
      printf("True");
    }
   else
    {
      printf("False");
    }


}
int main()
{
    int s[50] ;
    char key;

    printf("Enter String: ");
    gets(s);

    printf("Which letter: ");
    scanf("%c",&key);

    search(s, key);





    return 0;

}
