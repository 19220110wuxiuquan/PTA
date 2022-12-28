#include <stdio.h>
#include<math.h>
#include<string.h>
//模拟除法的类型题
int main()
{
	int n, a[1000],b[1000],count=0,t=0;
	scanf("%d", &n);
	for (int i = 0; i < 1000; i++)
		a[i] = 1;//初始化a，111111....
	for (int i = 0; i <= 1000; i++)
	{
		a[i] = t * 10 + a[i];//加上上一位
		b[count++] = a[i] / n;//记录商数
		t = a[i] % n;//记录余数
		if (a[i]%n==0)//整除后break
		 break;
	}
	int flag = 0;
	for (int i = 0; i < count; i++)
	{
		if (b[i])flag = 1;//去除前几位的0
		if(flag)printf("%d", b[i]);
	}
		
	printf(" %d", count );
 
	return 0;
}
