#include <stdio.h>

/*prints the table using for*/

int main(){
    int fahr;
    
    printf("Fahr\tCel\n");

    for (fahr = 0 ; fahr <= 300 ; fahr = fahr + 20){
        printf("%4.0f\t%4.1f\n", fahr, (5.0/ 9.0) * (fahr - 32));
    }

    return 0;
}
