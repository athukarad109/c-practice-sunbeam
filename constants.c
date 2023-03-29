#include<stdio.h>

int main()
{
    const int a = 10;
    int *ptr = &a; //non-const pointer pointing to const int
    //IMP NOTE : in this form we can update the value of a by *ptr = 11; this will change the value

    int b = 10;
    int * const ptr = &a; //const pointer pointing to non-const int
    //IMP NOTE : Here we cannot change the value of b becaue it is declared as const ptr so *ptr = 11 -> does not work

    const int c = 10;
    int * const cptr = &c; //const pointer pointing to const int

    return 0;
}

