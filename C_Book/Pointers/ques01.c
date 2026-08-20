#include <stdio.h>
int main(void) {
    float u, v;
    u = 0.3;
    float * pu;
    float *pv;
    pu = &u;
    v = *pu;
    pv = &v;
    printf("u = %f &u = %p pu = %p *pu = %f \n", u, &u, pu, *pu);
    printf("v = %f &v = %p pv = %p *pv = %f", u, &v , pv, *pv);
}