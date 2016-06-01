#include <math.h>

void xy2polair(double x, double y, double *r, double *phi)
{

    *phi = atan2(x,y);
    *r = sqrt(x*x + y*y);
}