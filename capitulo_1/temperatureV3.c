#include <stdio.h>
int main(){
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahr\tCel\n");
    fahr = lower;
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f\t%4.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
    return 0;

}

