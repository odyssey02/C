#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void disp_car(int car_number, int distance){
    printf("CAR #%d:",car_number);
    for (int i=0;i<distance/10;i++) printf("*");    //주행한 거리/10만큼 *출력
    printf("\n");
    return;
}

int main(){
    int car1_dist=0,car2_dist=0;

    srand((unsigned)time(NULL));

    for(int i=0;i<6;i++){
        car1_dist+=rand()%100;  //주행한 거리 0~99사이로 누적
        car2_dist+=rand()%100;
        disp_car(1,car1_dist);  //주행한 거리 출력
        disp_car(2,car2_dist);
        printf("---------------\n");
        _getch();
    }
    return 0;
}