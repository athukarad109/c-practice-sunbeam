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

    //we are not reccomended to initialize pointer without value
    // int *ptrr; //not reccomende because it stores garbage -> Wild Pointer
    int *ptrr = NULL; //We can use this instead -> NUllpointer

    //Generally we have to initialize pointer with type 
    //Ex int *ptr;
    //There is void pointer
    void *ptrv = NULL;
    //this can be used furthur with any data type
    printf("%d", *ptr); //here pointer does not know what to read because it does not know type
    printf("%d", *(int*)ptr); //we can use this instead -> casting
    //We can use same with any data type

    return 0;
}
