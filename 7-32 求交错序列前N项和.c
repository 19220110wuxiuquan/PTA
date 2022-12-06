#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i;
    int sign=1;
    double sum=0;
    for(i=1;i<=N;i++)
    {
        sum += (double)sign*i/(2*i-1);
        sign=-sign;
    }
    printf("%.3f\n",sum);
    return 0;
}
