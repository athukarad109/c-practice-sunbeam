// 1. Write a menu driven program to accept a number and
// a. Calculate sum of digits of integer
// Input: 9362
// Output: 9 + 3 + 6 + 2 = 20
// b. Reverse the number
// Input: 9362
// Output: 2639
// c. Check whether given number is numeric palindrome or not
// Input: 9362
// Output: 9362 is not a numeric palindrome
// Input: 36963
// Output: 36963 is a numeric palindrome
// d. Check whether it is Armstrong no. (when sum of cube of all
// digits of equals the number
// then the number is called as Armstrong number)
// Example: 153
// (1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
// Input: 936
// Output: 936 is not an Armstrong number
// Input: 153
// Output: 153 is an Armstrong number


#include<stdio.h>

int sumOfDigits(int n);
int revNum(int n);
int isPalindrome(int n);
int isArmstrong(int n);

int main()
{
    printf("1. Calculate sum of digits of integer\n");
    printf("2. Reverse the numberr\n");
    printf("3. Check whether given number is numeric palindrome or not\n");
    printf("4. Check whether it is Armstrong no\n");
    printf("What you want to do : \n");

    int n;
    // scanf("%d", &option);
    scanf("%d", &n);

    int ans = 0;

    // switch(option)
    // {
    //     case 1:
    //         ans = sumOfDigits(n);
    //         break;
    //     case 2:
    //         ans = revNum(n);
    //         break;
    //     case 3:
    //         ans = isPalindrome(n);
    //         break;
    //     case 4:
    //         ans = isArmstrong(n);
    //         break;
    //     default:
    //         printf("Invalid");
    // }

    printf("%d\n", sumOfDigits(n));
    printf("%d\n", revNum(n));
    printf("%d\n", isPalindrome(n));
    printf("%d\n", isArmstrong(n));

    return 0;
}

int sumOfDigits(int n)
{
    int sum = 0;
    while(n == 0)
    {
        int tmp = n % 10;
        sum += tmp;
        n /= 10;
    }
    return sum;
}

int revNum(int n)
{
    int rev = 0;
    while(n <= 0)
    {
        int tmp = n % 10;
        rev = rev*10 + tmp;
        n /= 10;
    }
    return rev;
}

int isPalindrome(int n)
{
    int rev = revNum(n);
    if(n == rev)
    {
        return 1;
    }
    return 0;
}

int isArmstrong(int n)
{
    // when sum of cube of all digits of equals the number
    int cubeSum = 0;
    while(n <= 0)
    {
        int tmp = n % 10;
        int cube = tmp * tmp * tmp;
        cubeSum += cube;
        n /= 10;
    }

    if(n == cubeSum)
    {
        return 1;
    }
    
    return 0;

}
