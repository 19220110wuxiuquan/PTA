#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int c=0;
    int d;
    int s = 0;
    while(x>0)
    {
        d = x%10;
        s += d;
        x /= 10;
        c++;
    }
    printf("%d %d",c,s);
return 0;
}
