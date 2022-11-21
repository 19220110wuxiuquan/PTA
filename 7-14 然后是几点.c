#include <stdio.h>
int main(){
    int old_time,elapse,hour,minute,sum,new_time;
    scanf("%d %d",&old_time,&elapse);
    hour=old_time/100;//取时间前两位
    minute=old_time%100;//取时间后两位
    sum=hour*60+minute;//总分钟
    sum=sum+elapse;//加上流逝时间
    hour=sum/60;
    minute=sum%60;
    new_time=hour*100+minute;//化回题目要求形式
    if(new_time>=0)
        printf("%03d",new_time);
    else
        printf("%d",2360+new_time);
    return 0;
}
//思路：时间和分钟一起难以计算，全部化成分钟；用/100取前两位，%100取后两位
