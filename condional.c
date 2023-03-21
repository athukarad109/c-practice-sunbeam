#include<stdio.h>

int main()
{
    int a = 50;
    int b = 350;
    int c = 200;

    a > b && b > c ? printf("a"): b > c ? printf("b") : printf("c");

    return 0;
}
