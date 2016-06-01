#include <stdio.h>
#include <math.h>
int main (void)
{
    int a=220, b=340;
    int sum=a+b;
    int dif=b-a;
    int mul=a*b;
    float div=((float)b)/a;

    printf("De som van %d en %d is %d.\n", a, b, sum);
    printf("Het verschil tussen %d en %d is %d.\n", b, a, dif);
    printf("Het product van %d en %d is %d.\n", a, b, mul);
    printf("Als ik %d deel door %d dan komt er %f uit.\n", b, a, div);

    return (0);
}
