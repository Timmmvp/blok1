#include <ctype.h>

int countVowels(char *s)
{
   int n=0;

    while (*s != '\0'){
            switch (tolower(*s)){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u': n++; break;
            }
        s++;
    }

    return n;

}