#include<stdio.h> 
int main()
{
	char c;
	c = getchar();
	while (c != '\n')
	{
		switch (c)
		{
		case'-':printf("fu"); break;
		case'0':printf("ling"); break;
		case'1':printf("yi"); break;
		case'2':printf("er"); break;
		case'3':printf("san"); break;
		case'4':printf("si"); break;
		case'5':printf("wu"); break;
		case'6':printf("liu"); break;
		case'7':printf("qi"); break;
		case'8':printf("ba"); break;
		default:printf("jiu"); break;
		}
		c = getchar();
		if (c != '\n')printf(" "); 
	}
	return 0;
}
