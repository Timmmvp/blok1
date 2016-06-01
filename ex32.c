#include <stdio.h>
#include <string.h>

int roman2arabic(char c);

int main(void)
{
    char teststring[]="MDCLXVI -mda1";
    int i;
    int getal;

    for(i=0; i<strlen(teststring); i++){

        getal=roman2arabic(teststring[i]);
        printf("%2d %c %d\n", i, teststring[i], getal);
    }

    return 0;
}