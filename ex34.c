#include <stdio.h>
#include <string.h>


int roman2arabic(char c);

int main(int argc, char *argv[])
{
   char s[32];
    int number;
    int last;
    int i;
    int x;

    if (argc < 2) return 1;
    strcpy(s, argv[1]);
    number = 0;
    last = 0;

    for (i = strlen(s); i >= 0; i--){
        x = roman2arabic(s[i]);

        if (x < last) {
            number = number - x;
        }
        else {
            number = number + x;
        }
    }
    printf("%d\n", number);

    return 0;

}