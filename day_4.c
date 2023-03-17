#include<stdio.h>

int main(int argc, char const *argv[])
{

    //Escape sequences

    printf("hello world\n");
    
    printf("\"Hello World\"\n");
    
    // \b - gets cusrsor one step behind
    printf("Hello There general kenobi.\b!\n");
    printf("Hello The\bre");

    // \t - adds tab
    printf("hello there \t general kenobi\n");

    // \r - carraige return
    printf("Kello there\rH\n");

    printf("\\n Hello there");

    return 0;
}
