#include<stdio.h>

int main(void) {
    int a;


    while (1) {

        fprintf(stdout, "Geef hieronder een getal en er wordt weergeven of dit een \nduizendtal, honderdtal, tiental of eennheid is.\n");
        fflush(stdout);
        fscanf(stdin, "%d", &a);
        if (a > 9999) {
            fprintf(stdout, "dit is een te groot getal. \n\n");
        }
        else if (a < 0) {
            fprintf(stdout, "\nDit is een negatief tegal. Het progromma stopt.");
            return (0);
        }
        else if (a > 999) {
        fprintf(stdout, "\n\ndit is een duizendtal.\n\n");
    }
    else if (a > 99) {
        fprintf(stdout, "\n\ndit is een honderdtal.\n\n");
    }
    else if (a > 9) {
        fprintf(stdout, "\n\ndit is een tiental.\n\n");
    }
    else if (a > 0) {
        fprintf(stdout, "\n\ndit is een eenheid.\n\n");
    }
    else if (a > 9999) {
        fprintf(stdout, "\n\ndit is een te groot getal.\n\n");
    }
    else if (a < 0) {
        return (0);
    }

}

}