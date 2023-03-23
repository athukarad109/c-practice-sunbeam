// 3. Write a program to calculate Area and Perimeter of Triangle for
// given length of three sides of triangle.
//  Use sqrt() function from math.h to calculate square root.
//  Perimeter = a + b + ca + b + c
//  Area = √s x (s – a) x (s – b) x (s - c)
// Test the program using values 3 ,4, 5 and 1, 2, 3 and 1, 2, 4 for a, b, c.
// Observe the results.


#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, perimeter, s, area;
    printf("Enter 3 values of sides : ");
    scanf("%f%f%f", &a, &b, &c);
    perimeter = a + b + c;
    s = perimeter/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Preimeter : %.2f and Area : %.2f", perimeter, area);
    return 0;
}

