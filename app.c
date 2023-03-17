#include<stdio.h>

int main()
{
    char ch = 'A';
    int age = 22;
    double score = 92.60;
    printf("Hello World ");
    printf("my age is %d and I scored %.2lf\n", age, score);
    printf("%c\n", ch);
    printf("%10d\n", sizeof(age));
    printf("%.lf", score);
    return 0;
}
