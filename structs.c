#include<stdio.h>


//struct are user defined datatype
//we can define struct like this

//we can add nested structs
struct date
{
    int day;
    int month;
    int year;
};

struct employee
{
    int empNo;
    char name[20];
    double salary;
    struct date join;
};


int main()
{
    //can create objs out of struct
    struct employee ak = {1, "Atharv", 120000, {10, 9, 2000}};
    printf("%d %s %lf, %d/%d/%d", ak.empNo, ak.name, ak.salary, ak.join.day, ak.join.month, ak.join.year);
    return 0;
}


