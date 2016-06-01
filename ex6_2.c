#include <stdio.h>

int countVowels(char *s);

int main(int argc, char *argv[])
{
 int numberOfVowels;

    if (argc<2) {
        printf("usage: %s <string>\n", argv[0]);
        return 1;
    }
        numberOfVowels = countVowels(argv[1]);
        printf("het aantal klinkers is %d", numberOfVowels);

    return 0;

    }
