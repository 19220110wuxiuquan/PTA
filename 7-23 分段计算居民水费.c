#include<stdio.h>
int main()
{
    int x;
    float y=0.0;
    scanf("%d",&x);
    if(x>=0&&x<=15)
        y=4.0*x/3.0;
    else
        y=2.5*x-17.5;
    printf("%.2f",y);
    return 0;
}
