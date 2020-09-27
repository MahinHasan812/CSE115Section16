//Create a structure called Shape which has two components,
//length and width. Create a structure variable Rectangle
//and take its length and width as input from the user.
//Implement the two functions int findArea(struct Shape R)
//and int findPerimeter(struct Shape R). From the main function,
//call these two functions to get the area and perimeter of the rectangle.

#include <stdio.h>

struct Shape{
    double length;
    double width;
};

int findArea(struct Shape R){
    return R.length*R.width;

}

int findPerimeter(struct Shape R){
    return 2*(R.length+R.width);

}

int main()
{
    struct Shape x;
    int p, area;
    scanf("%lf", &x.length);
    scanf("%lf", &x.width);
    p = findPerimeter(x);
    area = findArea(x);
    printf("%d %d", p, area);

    return 0;
}
