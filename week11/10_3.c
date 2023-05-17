#include <math.h>
#include <stdio.h>

int main(){
    double pi = 3.1415926535,x=0,y=0;

    x=pi/2; //90도
    y=sin(x); //sin(90도)
    printf("sin(%f) = %f\n",x,y);
    y=cos(x); //cos(90도)
    printf("cos(%f) = %f\n",x,y);
    return 0;
}