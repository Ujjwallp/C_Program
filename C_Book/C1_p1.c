#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the two numbers a and b: ");
    scanf("%d %d", &a , &b);
    int c = a + b;
    printf("The sum of a and b is: %d ", c);
    return 0;
}
