#include <stdio.h>

int main(void)
{
    float a,b;

    fprintf(stdout, "Type hier twee willekeurige getallen. Dit mogen ook kommagetallen zijn.\nDe gekozen getallen zullen hieronder afgedrukt worden.\n");
    fflush(stdout);
    fscanf(stdin, "%f", &a);
    fscanf(stdin, "%f", &b);

    fprintf(stderr, "De door u gegeven waarden zijn: %f en %f.\n", a, b);

    return(0);

}
