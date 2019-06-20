#include<stdio.h>
#include<math.h>

int main(){
    double x, f;
    int i;

    for(i=0; i<=100; i++){
        x=i*2*M_PI/100.0;
        f=sin(x);
        printf("%6.3f %6.3f\n", x, f);
    }
}