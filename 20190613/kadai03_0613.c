#include<stdio.h>
typedef struct complex{
    double real;
    double imag;
} cnum;

void c_times(cnum *, cnum *, cnum *);

int main(){
    cnum c1, c2, c3;
    c1.real=0.3,  c1.imag=0.7;
    c2.real=0.8,  c2.imag=0.9;
    c_times(&c1, &c2, &c3);
    printf("c3 = (%8.4f %8.4f )\n", c3.real, c3.imag);
}

void c_times(cnum *c1, cnum *c2, cnum *c3){
    c3->real = c1->real*c2->real - c1->imag*c2->imag ;
    c3->imag = c1->imag*c2->real + c2->imag*c1->real ;
}