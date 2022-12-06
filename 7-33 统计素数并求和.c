#include<stdio.h>
int main()
{
    int M,N;
    scanf("%d%d",&M,&N);
    int i,j;
    int count=0;
    int sum=0;
    if(M==1)
    {
        M=2;
    }
    for(i=M;i<=N;i++)
    {
        int isPrime = 1;
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
				isPrime = 0;
				break;
			}
        }
        if(isPrime==1)
            {
			    count++;
			    sum += i;
		    }
    }
    printf("%d %d",count,sum);
    return 0;
}
