#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss();

int main(){
    int toss=0, heads=0, tails=0;
    srand((unsigned)time(NULL));    //시간으로 랜덤시드 결정
    for(toss=0;toss<100;toss++){    //100번 반복
        if(coin_toss()) heads++;    //앞면이면 heads++
        else tails++;            //뒷면이면 tails++
    }
    printf("동전의 앞면: %d\n",heads);
    printf("동전의 뒷면: %d\n",tails);
    return 0;
}

int coin_toss(){
    return rand()%2;    //0 or 1 반환
}
