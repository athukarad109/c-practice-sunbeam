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
    scanf("%lf", &far);
    
    cel = (far - 32.0) * (5/9);

    printf("Celsious is %lf", &cel);

    return 0;
}

