#include <stdio.h>

int main(){
    float radius=0,area=0;
    printf("원의 반지름을 입력하시오: ");
    scanf("%f",&radius);
    area=radius*radius*3.14;
    printf("원의 면적: %f\n",area);

    return 0;
}