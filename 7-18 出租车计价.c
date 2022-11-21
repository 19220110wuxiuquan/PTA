#include <stdio.h>
int main()
{
    float km,wait_money;
    int wait_time;
    scanf("%f %d",&km,&wait_time);
    if(wait_time<5)
        wait_money=0;
    else
        wait_money=2*(wait_time/5);
    if(km<=3)
        printf("%.0f",10+wait_money);
    else if(km<=10)
        printf("%.0f",10+(km-3)*2+wait_money);
    else
        printf("%.0f",24+(km-10)*3+wait_money);
    return 0;
}
