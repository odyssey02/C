#include <stdio.h>

int main(){
    int x=0,y=0,sum=0;
    printf("첫번째 숫자를 입력하세요: ");
    scanf("%d",&x);
    printf("두번째 숫자를 입력하세요: ");
    scanf("%d",&y);
    sum=x+y;
    printf("두수의 합: %d\n",sum);

    return 0;
}