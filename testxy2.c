#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void xy2polair(double x, double y, double *r, double *phi);

int main(int argc, char *argv[])
{
    double x,y;
    double r,phi;

    if (argc<3){
        printf("usage %s <x> <y>", argv[0]);
    }
    x = atof(argv[1]);
    y = atof(argv[2]);

    xy2polair(x, y, &r, &phi);

    printf("r = %g en phi = %g\n", r, phi*180/M_PI);

    return 0;
}