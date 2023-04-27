#include <stdio.h>

int main(){
    int a,b,r;
    printf("두 개의 정수를 입력하시오(큰수, 작은수):");
    scanf("%d %d",&a,&b);
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    printf("최대 공약수는 %d입니다.\n",a);

    return 0;
}