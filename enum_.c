#include<stdio.h>

int main()
{
    enum color
    {
        //Enum constants - starts from 0 means RED - 0
        RED, BLUE, GEREEN

        /* 
        We can assign values to consts
        RED = 1
        we can have multiple consts with same value
        RED = 1, BLUE = 1
        Names of const cannot be duplicate
        Internally enum is int
        */

    };


    //creating variables from enum
    enum color c1;
    c1 = RED;
    printf("%d", c1);


    //There can be anonymus enum
    enum
    {
        HELLO, BYE
    };
    

    return 0;
}
