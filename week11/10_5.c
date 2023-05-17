#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t start, end;
    start = time(NULL); //시작 시간
    printf("10초가 되면 아무 키나 누르세요\n");
    while (1)
    {
        if (getchar())  //키 입력이 확인
            break;
    }
    printf("종료되었습니다.\n");
    end = time(NULL);   //종료 시간
    printf("경과된 시간은 %ld 초입니다. \n", end - start);
    return 0;
}