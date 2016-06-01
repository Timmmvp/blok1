#include <stdio.h>


int main(void)
{
    float a;
    float sqr;

    printf("Type hieronder een getal en het kwadraat hiervan wordt weergeven.\nDit mag ook een gebroken getal zijn.\n");
    fflush(stdout);
    scanf("%f", &a);
    sqr=a*a;

    printf("Het kwadraat van %f is %f.", a, sqr);

    return(0);

}
