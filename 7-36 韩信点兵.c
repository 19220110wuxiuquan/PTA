#include<stdio.h>
int main()
{
	int sum=1;
	while (sum % 5 != 1 || sum % 6 != 5 || sum % 7 != 4 || sum % 11 != 10)
	{
		sum++;
	}
    printf("%d",sum);
    return 0;
}
