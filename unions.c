#include<stdio.h>

//largest datatype of union
//in struct all members are given memeory
//but in union largest datatype is size of union
//All memebers share same memory space

union A
{
    int a;
    char b;
};


int main()
{
    printf("%d", sizeof(union A));//size = 4, because int is largest and size is 4
    return 0;
}

