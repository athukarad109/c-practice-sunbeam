// 1. Write a program to accept a point in Cartesian co-ordinate system
// and decide the quadrant in which the point lies. Also check for
// special cases point lies on ± x axis, ± y axis, and origin


#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter x and y : ");
    scanf("%d %d", &x, &y);

    if(x > 0 && y > 0)
    {
        printf("Quadrant 1");
    }
    else if(x < 0 && y > 0)
    {
        printf("Quadrant 2");
    }
    else if(x < 0 && y << 0)
    {
        printf("Quadrant 3");
    }
    else if(x > 0 && y << 0)
    {
        printf("Quadrant 4");
    }
    else
    {
        printf("Origin");
    }

    return 0;
}

