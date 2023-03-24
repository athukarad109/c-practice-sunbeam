// 2. Write a program to display number of days in the given year. Check
// condition for leap year. A year is a leap year if it is divisible by 4 but
// not by 100, except that years divisible by 400 are leap years.
// a. Without using logical operators
// b. Using logical operators
// c. Conditional operator

#include<stdio.h>

int main()
{
    printf("Enter year : ");
    int year;
    scanf("%d", &year);
    if(year % 4 == 0 || year % 400 == 0)
    {
        // if(year % 400 == 0)
        // {
        //     printf("Leap");
        // }
        printf("Leap");
    }
    else
    {
        printf("Not leap");
    }

    

    return 0;
}
