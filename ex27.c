#include<stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int getal;

    getal= atoi(argv[1]);

    int a;


    for(a=1; a<=getal; a++){
      int tafel = a*10;
        printf("\n%d", tafel);
    }

    return(0);

    }