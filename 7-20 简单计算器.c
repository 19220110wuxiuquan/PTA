/*
思路：先输入n1,在用getchar判断符号，如果符号是=就break，否则输入n2
输入n2后判断之前的符号是加减乘除中的哪一个，用ifelse判断
由于题目要输出error，直接输出error的话会导致最后数值也输出，所以要用一个变量e控制
一开始设e=0，当输出error后,error+1；当error=1时，printf error，注意if的范围，善用debug
最后输出结果
*/
#include <stdio.h>
int main()
{
int n1,n2,e=0;
char fu;
scanf("%d",&n1);
while(fu!='=') 
{
	fu=getchar();
	if(fu=='=')
  {
		break;
	}
	scanf("%d",&n2);
	if (fu=='+'||fu=='-'||fu=='*'||fu=='/')
	{
		if(fu=='+')
    {
			n1=n1+n2;
			}
      else if(fu=='-')
      {
				n1=n1-n2;
			}
      else if(fu=='*')
      {
				n1=n1*n2;
			}
      else if(fu=='/')
      {
				if(n2==0)
        {
					printf("ERROR");
					e += 1;
				}
        else
				  n1=n1/n2;
			}
	}
	else 
  {
		printf("ERROR");
		e += 1;
	}
  }
	if(e==0)
  {
		printf("%d",n1);
	} 
	return 0;
}
