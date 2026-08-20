#include <stdio.h>

int main() {
  int num;
  int binary[32];
  int i, index;

  printf("Enter number: ");
  scanf("%d", &num);

  if (num == 0) {
    printf("Program ended.\n");
  }

  index = 0;

  while (num > 0) {
    binary[index] = num % 2;
    num = num / 2;
    index++;
  }

  printf("Binary equivalent is: ");
  for (i = index - 1; i >= 0; i--) {
    printf("%d", binary[i]);
  }
  return 0;
}
