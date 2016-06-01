#include <stdio.h>

char unit(int u)
{
    switch(u) {

        case 0: return "";
        case 1: return "een";
        case 2: return "twee";
        case 3: return "drie";
        case 4: return "vier";
        case 5: return "vijf";
        case 6: return "zes";
        case 7: return "zeven";
        case 8: return "acht";
        case 9: return "negen";
        default : return "";
    }

}

char decimal(int d)
{
    switch(d) {

        case 0: return "";
        case 1: return "tien";
        case 2: return "twintig";
        case 3: return "dertig";
        case 4: return "veertig";
        case 5: return "vijftig";
        case 6: return "zestig";
        case 7: return "zeventig";
        case 8: return "tachtig";
        case 9: return "negentig";
        default : return "";
    }

}

char anders(int x) {
    if (x == 0) {return ("nul");}

    else if (x == 11) {return ("elf");}
    else if (x == 12) {return ("twaalf");}
    else if (x == 13) {return ("dertien");}

}

char en(int e){}


int main (int argc, char *argv[])
{
    int x, lengte, eenheid, tiental;

    x = atoi(argv[1]);

    lengte = strlen(argv[1]);

    eenheid = x % 10;
    tiental = x / 10;

    if (tiental ==2 || tiental ==3)
   if(lengte ==2){
       if(x == anders){printf("%s", x);}
       else if return
   }
    if(lengte == 1) {
        printf("%d", u);
    }
    else {
        return "";
    }

}