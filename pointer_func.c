#include<stdio.h>

void sumpro(int *a, int *b, int *s, int *p)
{
    *s = *a + *b;
    *p = *a * *b;
}

int main()
{
    int a=10, b=20, s, p;
    sumpro(&a, &b, &s, &p);
    printf("%d %d", s, p);
    return 0;
}


