#include<stdio.h>

int main()
{
    //BITWISE OPERATORS - ONLY WORKS WITH INT

    //AND
    printf("%d\n", 10 & 5);

    //OR
    printf("%d\n", 10 | 5);

    //XOR
    printf("%d\n", 10 ^ 5);

    //NOT = -(n+1)
    printf("%d\n", ~10);

    //Left shift - multiply by 2 to power n
    //In the ex = 10 * 2^2 = 10 * 4 = 40
    printf("%d\n", 10 << 2);

    //Right shift - devide by 2 to power n
    //In the ex = 10 / 2^2 = 10 / 4 = 2
    printf("%d\n", 10 >> 2);

    return 0;
}

