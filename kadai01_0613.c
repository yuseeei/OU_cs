#include<stdio.h>
#include<math.h>

int main(){
    double x, f;
    int i, n;

    for(i=-40; i<40; i++){
        x = M_PI * i / 20;
        f = 0;
        for(n=1; n<=50; n++){
            f = f + 2*pow(-1, n-1)*sin(n*x)/n;
        }
    printf("%lf %lf\n", x, f);    
    }
}
