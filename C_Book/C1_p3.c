#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter a, b , c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a >= b && a >= c) {
        printf("The first number which is a %d is larger", a);
    } else if (b >= a && b >= c) {
        printf("The second number which is %d is larger", b);
    } else {
        printf("The third number which is %d is larger", c);
    }
    return 0;
}