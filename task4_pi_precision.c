#include <stdio.h>

int main(void) {
    double pi = 3.14159265358979;

    printf("Pi with 2 decimal places:  %.2lf\n", pi);
    printf("Pi with 4 decimal places:  %.4lf\n", pi);
    printf("Pi with 6 decimal places:  %.6lf\n", pi);
    printf("Pi with 10 decimal places: %.10lf\n", pi);

    return 0;
}
