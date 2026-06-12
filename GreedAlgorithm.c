#include <stdio.h>

int main() {
    int numerator;
    int denominator;
    double working;
    int i = 1;
    printf("Enter a fraction (e.g., 3/4 or 1/3): ");
    if (scanf("%d/%d", &numerator, &denominator) == 2) {
        working = (double)numerator / denominator;
        printf("%f\n", working);
        printf("%d/%d\n\noutput:\n", numerator,denominator);
        //this while loop is not properly working realisticaly I want "not equal or more than" so currently it functions as while(1)
        while (working != 0) {
            //0.000008 is here to accound for floating point errors
            if (working >= (1.0 / i)-0.000008) {
                //125000 is 0.000008 so it breaks if this is not here
                if(i>=125000) {
                    break;
                }
                printf("1/%d\n", i);
                working = working - (1.0/i);
            }
            i=i+1;
            //breaks on buffer underflow
            if (i < 0) {
                working = 0;
            }
        }
    } else {
        printf("Invalid input.\n");
    }
}
