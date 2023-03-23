// 1. Write a program to accept a 5 digit number and check whether it is
// a numeric palindrome. (If reversed number is same as entered
// number it is called palindrome).

#include<stdio.h>

int main()
{
    int num, rev = 0, ref;
    printf("Enter number : ");
    scanf("%d", &num);
    ref = num;
    while (num > 0)
    {
        int tmp = num % 10;
        rev = rev * 10 + tmp;
        num = num/10;
    }
    // printf("%d\n%d", ref, rev);
    if(ref == rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    
    return 0;
}

