#include <stdio.h>
int main() {
  int a, b, c;
  a = 37;
  b = 27;
  c = -10;
  printf("a & b = %d\n ", a & b);
  printf("a | b = %d\n ", a | b);
  printf("a ^ b = %d\n ", a ^ b);
  printf("~a = %d\n ", ~a);
  printf("~b = %d\n ", ~b);
  printf("~c = %d\n ", ~c);
  printf("a << 3= %d\n ", a << 3);
  printf("b >> 3 = %d\n ", b >> 3);
  return 0;
}