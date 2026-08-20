#include <stdio.h>

int main() {
  int num, prev;
  int runs = 0;

  if (scanf("%d", &num) == 1) {
    if (num < 0) {
      printf("Total Count is: 0\n");
      return 0;
    }
  }

  runs = 1;
  prev = num;

  while (scanf("%d", &num) == 1) {

    if (num < 0)
    break;

    if (num <= prev)
    runs++;

    prev = num;
  }

  printf("%d\n", runs);

  return 0;
}