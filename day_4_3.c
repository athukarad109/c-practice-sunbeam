#include<stdio.h>

int main(int argc, char const *argv[])
{
    // int num;
    // char ch;
    // scanf("%c%d", &ch, &num);
    // printf("Value is :%c %d", ch, num);

    int a, b;
    printf("Enter first digit : ");
    scanf("%d", &a);
    printf("Enter second digit : ");
    scanf("%d", &b);

    printf("Sum of %d and %d is %d", a, b, a+b);

    return 0;
}

