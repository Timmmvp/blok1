#include<stdio.h>

int main(void)
{
    int a;
    int sqr;

    a=1;
    do {
        sqr = a * a;
        printf("%d\n", sqr);
        a++;
    }
    while(a<21);

    }
