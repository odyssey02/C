#include <stdlib.h>
#include <stdio.h>

int main(){
    system("dir");  //dir 명령 조짐
    printf("아무 키나 치세요\n");
    _getch();   //키 입력 대기
    system("cls");  //화면 지우기

    return 0;
}