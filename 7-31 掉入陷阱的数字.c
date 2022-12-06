#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int i=1;
	int sum=0;
	for(i;;i++)
    {
		int temp=n;//用于储存N_k，与N_k-1比较
		int sum=0;
		while(n>0)
        {
			sum+=n%10;
			n=n/10;
		}	
		n=sum*3+1;
		printf("%d:%d\n",i,n);
		if(n==temp)
        {//N_k与N_k-1相等，则退出循环
			break;
		}
	}
	return 0;
}
