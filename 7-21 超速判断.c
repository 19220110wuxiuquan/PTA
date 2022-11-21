#include<stdio.h>
int main()
{
    int speed;
    scanf("%d",&speed);
    if(speed>60&&speed<=500)
    {
        printf("Speed: %d - Speeding",speed);
    }
    else if(speed>=0&&speed<=60)
    {
        printf("Speed: %d - OK",speed);
    }
    return 0;
}
