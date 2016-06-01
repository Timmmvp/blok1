#include <math.h>
#include <stdio.h>

double pyth(double x,double y);

int x[]={ 3, 3 ,1, -1, -1, 1, -3, 0};
int y[]={ 4, -4, 1, 1, -1, -1, 0, 4};


int main(void){

    int i;
    double radian;
    radian = pyth;

    for(i=0; i<8; i++){
        printf("x=%2d, y=%2d, r=%9.4f",x[i] ,y[i], radian);
    }
return 0;
}
