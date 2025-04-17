#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Fahrenheit-Celsius table */

int main(){
    printf("Fahr\tCel\n");

    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%4d\t%4.1f\n", fahr, (5.0 / 9.0) * fahr -32);
    return 0;
}
