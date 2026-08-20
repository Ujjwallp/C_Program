#include <stdio.h>
int main() {/Users/saujjwal/Downloads/2.pdf
    int a, b, c;
    a = 10;
    b = 13;
    c = 9;
    if(a >= b && a >= c){
        printf("a %d is largest", a);
    } 
    else if(b >= a && b >= c){
        printf("b %d is largest", b);
    } 
    else {
        printf("c %d is largest", c);
    } 
    return 0;
}