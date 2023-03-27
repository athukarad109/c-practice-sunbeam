// 2. Write a program to display number of days in the given month and
// year using switch case statement.

#include<stdio.h>

int main()
{
    printf("Enter Month Num : ");

    int month;

    scanf("%d", &month);

    switch (month)
    {
    case 1 || 3 || 5 || 7 || 8 || 10 || 12:
        printf("%d", 31);
        break;
    case 4 || 6 || 9 || 11:
        printf("%d", 30);
        break;
    default:
        printf("%d", 28);
        break;
    }

    return 0;
}
