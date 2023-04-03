#include<stdio.h>


//struct are user defined datatype
//we can define struct like this
struct employee
{
    int empNo;
    char name[20];
    double salary;
};

int main()
{
    //can create objs out of struct
    struct employee ak = {1, "Atharv", 120000};
    return 0;
}

