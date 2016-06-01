#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
    {
        int getal;

        getal= atoi(argv[1]);

        if (getal > 9999) {
            fprintf(stdout, "\n\ndit is een te groot getal.\n\n");
        }
        else if (getal > 999) {
            fprintf(stdout, "\n\ndit is een duizendtal.\n\n");
        }
        else if (getal > 99) {
            fprintf(stdout, "\n\ndit is een honderdtal.\n\n");
        }
        else if (getal > 9) {
            fprintf(stdout, "\n\ndit is een tiental.\n\n");
        }
        else if (getal > 0) {
            fprintf(stdout, "\n\ndit is een eenheid.\n\n");
        }
        else if (getal < 0) {
            fprintf(stdout, "\n\ndit is een negatief getal, het progromma stopt.");
            return (0);
        }

        return(0);

    }