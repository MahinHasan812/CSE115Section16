// Define a structure named MovieStar which will have the following
//elements:  Name (string), Rating(float), TotalFans(int). Declare a
//structure array of MovieStar for 5 movie stars. Now take N user reviews
//as input. Each review will consist of a Movie star name and his rating by
//a new fan. Now adjust each Movie Star’s rating according to the reviews and
//show the results.  Rating of a movie star is the average rating given by fans those who rated him.


#include<stdio.h>
struct MovieStar
{
    char name[20];
    float rating;
    int totalfans;
}moviestars[5];

int main()
{
    int i;
    float ratings;
    char s;
    printf("Movie Star Review\n");

    review:
    printf("\nEnter Movie Star No(0-4): ");
    scanf("%d", &i);
    printf("Enter Name: ");
    scanf("%s", &moviestars[i].name);

    printf("Enter Rating: ");
    scanf("%f", &ratings);
    moviestars[i].rating+=ratings;

    moviestars[i].totalfans++;

    printf("\n Show Results (Y) or  Add another review? (N)");
    scanf(" %c", &s);
    if(s=='Y')
    {
        printf("\n\n Movie Stars Reviews");
        for(int i=0; i<5; i++)
        {
            printf("\n\nName: %s", moviestars[i].name);
            moviestars[i].rating=moviestars[i].rating/moviestars[i].totalfans;
            printf("\n Rating: %.2f", moviestars[i].rating);
            printf("\nTotal Fans: %d\n", moviestars[i].totalfans);
        }
    }
    else
        goto review;

    return 0;
}
