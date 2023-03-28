#include<stdio.h>

int main()
{
    int n = 10;
    int *ptr = &n; //referencing
    int **addptr = &ptr; //referencing pointer
    printf("%d\n", ptr);
    printf("%d\n", *ptr); //*ptr -> value at ptr
    printf("%d\n", **addptr);

    *ptr = 20; //updating value by pointer
    printf("%d\n", n);

    n = 15;
    printf("%d\n", *ptr); //*ptr -> value at ptr
    printf("%d\n", ptr);
    printf("%d\n", sizeof(ptr));



    return 0;
}
