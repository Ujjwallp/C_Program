#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter the numbers a and b: ");
    scanf("%d %d", &a , &b);
    if(a > b) {
        printf("a which is %d is bigger than b which is %d", a , b);
    }
    else {
        printf("b which is %d is bigger than a which is %d", b , a);
    }
}