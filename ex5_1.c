#include <stdio.h>
#define NUMBER 21

int main(void) {

    int x[NUMBER];
    int i;
    int sum=0;

    for (i = 0; i < NUMBER; i++) {
        x[i] = 2 + 3 * i;
    }

    for (i = 0; i < NUMBER; i++) {
        printf("%d %d\n", i, x[i]);
    }
    for (i = 0; i < NUMBER; i++) {
        sum += x[i];
    }


    printf("de som is %d\nHet gemiddelde is %f", sum, (double) sum / NUMBER);

    return 0;
}