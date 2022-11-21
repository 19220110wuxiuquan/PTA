#include<stdio.h>
int main()
{
    int mm,dd,yyyy;
    scanf("%d-%d-%d",&mm,&dd,&yyyy);
    printf("%04d-%02d-%02d",yyyy,mm,dd);
    return 0;
}
