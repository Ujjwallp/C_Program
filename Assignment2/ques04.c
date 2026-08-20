#include <stdio.h>
int main() {
  char hex[20];
  int i = 0;

  printf("Enter hexadecimal number: ");
  scanf("%s", hex);

  while (hex[i] != '\0') {
    i++;
  }
  printf("Length of the hexadecimal is: %d\n", i);
  
  return 0;

}
