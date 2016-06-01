#include <stdio.h>
#define  MAXBUF 256


char buf[MAXBUF];
char *makeLastCapital(char *s);

int main (void)
{
    FILE *fp, *gp;

    if( (fp=fopen("ma_yuan.txt", "r")) ==NULL ){
        printf("error : couldn't find or open file\n");
        return 1;
    }

    if( (gp=fopen("out.txt", "wb")) ==NULL){
        printf("error couldn't find or open file");

        return 1;
    }

    while (fgets(buf, MAXBUF-1, fp) !=NULL){
        fprintf(gp, "%s\n", makeLastCapital(removeEndOfLine(buf)));
    }
    fclose(fp);
    fclose(gp);

    return 0;
}