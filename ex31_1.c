#include <stdio.h>
#include <string.h>

int roman2arabic(char c)
{
    int x;

    switch (c){
        case 'M': x=1000;
        case 'D': x=500;
        case 'C': x=100;
        case 'L': x=50;
        case 'X': x=10;
        case 'V': x=5;
        case 'I': x=1; break;
        default : x=0; break;
    }
    return x;
}
