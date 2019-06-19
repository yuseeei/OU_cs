#include<stdio.h>
#include<math.h>

int main(){

    int i, n;
    double x = 0;
    double Sekibun[20];

    for(n=1;n<=20;n++){
          Sekibun[n]=0;

          for(i=0; i<500; i++){
            x = i*2*M_PI/1000;
            Sekibun[n] = Sekibun[n] + x*sin(n*x);
          }
          Sekibun[n] = Sekibun[n] *4/1000;
          printf("%lf\n",Sekibun[n]);
        }

}