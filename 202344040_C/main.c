#include <stdio.h>

int main(){
    int x=0,y=0;
    scanf("%d",&x);
    scanf("%d",&y);

    printf("%d\n",x*(y%10));
    printf("%d\n",x*(y/10%10));
    printf("%d\n",x*(y/100));

    return 0;
}