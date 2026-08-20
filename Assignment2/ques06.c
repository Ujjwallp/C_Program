#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, fall = 0;
  float x, y, distance;

  for (i = 1; i <= 5000; i++) {
    x = (float)rand() / RAND_MAX;
    y = (float)rand() / RAND_MAX;

    distance = (x - 0.5) * (x - 0.5) + (y - 0.5) * (y - 0.5);

    if (distance <= 0.25) {
      fall++;
    }
  }

  printf("Approximate value of pi = %f\n", 4.0 * fall / 5000);

  return 0;
}