#include<stdio.h>
int main()
{
	int n,m,i,j,sum,flag=0;//
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++)
	{
		sum=1;
		if(i==1) continue;	//1不是完数 
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				 sum=sum+j;
			} 
		}
		if(sum==i)
		{
			printf("%d = 1",sum);
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					printf(" + %d",j);
				}
			}
			printf("\n");
			flag=1;
		}
	}
	if(flag==0) 
	printf("None");
	return 0;
}
