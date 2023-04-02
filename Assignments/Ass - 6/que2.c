// 2. Using For loop & While loop
// Write a program to display n terms of Fibonacci series
// Input: 6
// Output: 1, 1, 2, 3, 5, 8

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int prev1 = 0, prev2 = 1;
    printf("%d ", 1);
    for(int i=1; i < n; i++)
    {
        int num = prev1+prev2;
        printf("%d ", num);
        prev1 = prev2;
        prev2 = num;
    }

    return 0;
}
