#include <stdio.h>

int main(){
    double w=10,h=5,area,perimeter;
    area=w*h;
    perimeter=2*(w+h);
    printf("사각형의 넓이: %f\n",area);
    printf("사각형의 둘레: %f\n",perimeter);

    return 0;
}