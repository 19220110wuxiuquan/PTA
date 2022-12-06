#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i;
    int x=1;
    while(N>1)
    {
        x=2*(x+1);
        N--;
    }
    printf("%d",x);
    return 0;
}
