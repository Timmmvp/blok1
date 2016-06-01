#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char c;
    int d;
    char s[64];

    c = argv[1][0];
    d = atoi(argv[2]);
    strcpy(s, argv[3]);

    printf("\n%c %d %s\n" , c, d, s);

    return (0);

}