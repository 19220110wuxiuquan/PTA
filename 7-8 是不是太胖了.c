#include<stdio.h>
int main()
{
    int H;
    scanf("%d",&H);
    if(H>100&&H<=300)
    {
        float W;
        W=(H-100)*0.9*2;
        printf("%.1f",W);
    }
    return 0;
}
