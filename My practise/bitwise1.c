#include <stdio.h>
int main(){
    int a, b;
    a = 13;
    b = 17;
    printf("a & b = %d ", a & b);
    printf("a | b = %d ", a | b);
    printf("a ^ b = %d ", a ^ b);
    printf("~a = %d ", ~ a);
    printf("~b = %d ", ~b);
    printf("a << 3 = %d ", a << 3);
    printf("b >> 3 = %d ", b >> 3);
    return 0;
}