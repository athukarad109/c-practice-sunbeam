#include<stdio.h>

int main()
{
    char str[5] = {'a', 'b', 'c', 'd', 'e'};
    //this is char array

    char str2[5] = {'a', 'b', 'c', 'd','\0'};
    //we need to add extra '\0' at the end to specify this as string, last one is called null char

    printf("%s\n", str2); //we can print string with %s

    char str3[5] = {'a', 'b', 'c', 'd'};
    //here we are partially initialized so last value will automatically be 0
    printf("%s\n", str3);

    char name[] = "Atharv"; //Also a way to declare string without size, so compiler autimatically adds 0 at end
    printf("%s", name);

    return 0;
}
