#include<stdio.h>

int main()
{
    /*
        2. Write a program to convert temperature in Celsius to Fahrenheit
        and vice versa.
        Formula for conversion is
        ºC = 5/9 x (ºF - 32)
    */
    double cel, far;
    printf("Enter temp in Fahrenheit : ");
    scanf("%fl", &far);
    printf("%fl", far);
    cel = (far - 32) * (5/9);

    printf("Celsious is %fl", &cel);

    return 0;
}

