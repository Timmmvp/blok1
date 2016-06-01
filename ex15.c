#include <stdio.h>
#include <math.h>
int main (void)
{
    int a, b;
    int sum;
    int dif;
    int mul;
    float div;

    printf("Type hier twee willekeurige hele getallen \nen de som, het verschil, het product en de deling ervan worden weergeven\n");
    fflush(stdout);
    scanf("%d", &a);
    scanf("%d", &b);

    sum=a+b;
    dif=a-b;
    mul=a*b;
    div=((float)b)/a;
    printf("De som van %d en %d is %d.\n", a, b, sum);
    printf("Het verschil tussen %d en %d is %d.\n", a, b, dif);
    printf("Het product van %d en %d is %d.\n", a, b, mul);
    printf("Als ik %d deel door %d dan komt er %f uit.\n", b, a, div);

    return (0);
}
