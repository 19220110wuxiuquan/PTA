#include<stdio.h>
int main()
{
    int n,w;
    int count=1;
    scanf("%d",&n);
    w=n;//防止n在第一个循环中发生变化
    while(w>9)//少取count一个零
    {
        w=w/10;
        count=count*10;
    }
    while(count>0)
    {
        printf("%d ",n/count);
        n=n%count;//留下除第一位以外的数；
        count=count/10;
    }
    return 0;
}
