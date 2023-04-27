#include <stdio.h>

int main(){
    double rate=0,usd=0,krw=0;
    printf("환율을 입력하시오: ");
    scanf("%lf",&rate);
    printf("원화 금액을 입력하시오: ");
    scanf("%lf",&krw);
    usd=krw/rate;
    printf("원화 %f원은 %f달러입니다.\n",krw,usd);

    return 0;
}