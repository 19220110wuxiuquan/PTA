#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i;
    double a=2;
    double b=1;
    double sum=0;
    double exchange=0;
    for (i=1;i<=N;i++)
    {
        sum+=a/b;
        exchange=a;
        a+=b;
        b=exchange;
    }
    printf("%.2f",sum);
    return 0;
}
