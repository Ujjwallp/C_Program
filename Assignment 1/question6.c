#include <stdio.h>
int main() {
    int d_fahrenheit = 27;
    float d_celsius = (d_fahrenheit - 32) / 1.8;
    printf("The tempearture in Celsius is: %f ", d_celsius);
    return 0;
}