#include <stdio.h>
int main() {
    float r1, r2, r3;
    r1 = 1.0;
    r2 = 1.2;
    r3 = 2.3;
    float R = (r1*r2*r3) / ((r2 * r3) + (r1 * r3) + (r1 * r2));
    printf("The total resistance R is: %f ", R);
    return 0;
}