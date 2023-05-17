#include <stdio.h>
#include <math.h>
#define PI 3.141592

double rad(double degree)   //각도를 라디안으로 변경
{
    return PI * degree / 180.0;
}
void drawbar(int height)    //함수 그리기
{
    for (int i = 0; i < height; i++)
        printf("*");
    printf("\n");
}
int main(void)
{
    int degree, x, y;
    for (degree = 0; degree <= 90; degree += 10){   //0도부터 90도까지
        y = (int)(60 * sin(rad((double)degree)) + 0.5); //sin()함수를 이용하여 y값 계산
        drawbar(y);
    }
    return 0;
}