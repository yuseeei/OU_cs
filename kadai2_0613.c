#include<stdio.h>
#include<math.h>

int main(){
    double x, sekibun[] = {};
    int i, n;

    for(n=1; n<=10; n++){
        sekibun[n] = 0;
        
        for(i=1; i<20; i++){
            x = i*2*M_PI/40;
            sekibun[n] = sekibun[n] + sin(n*x);
            printf("%lf\n", sekibun[n]);
        }
        sekibun[n] = sekibun[n]*2*M_PI/40;
    }
}