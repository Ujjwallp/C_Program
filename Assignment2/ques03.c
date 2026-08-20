#include <stdio.h>
int main() {
  int num, i;
  unsigned long long factorial = 1;

  printf("Enter number: ");
  scanf("%d", &num);

  if (num < 0) {
    printf("Please Enter Positive Number.\n");
  }
  
  if (num > 0) {
    for (i = num; i >= 1; i--) {
      factorial = factorial * i;
    }
    printf("Factorial of % d = %llu\n", num, factorial);
  } else if (num == 0) {
    printf("Factorial of 0 = 1\n");
  }
  return 0;
}