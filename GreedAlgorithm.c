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
        while (working != 0) {
            if (working >= (1.0 / i)-0.000008) {
                if(i>=125000) {
                    break;
                }
                printf("1/%d\n", i);
                working = working - (1.0/i);
            }
            i=i+1;
            if (i < 0) {
                working = 0;
            }
        }
    } else {
        printf("Invalid input.\n");
    }
}
