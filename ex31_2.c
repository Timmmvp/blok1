#include <stdio.h>
#include <string.h>

int roman2arabic(char c)
{

    switch (c){
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
        default : return 0;
    }
}