#include <stdio.h>
int main()
{
    int day;
    scanf("%d",&day);
    if(day>0&day<6)
        printf("%d",day+2);
    else 
    {
        printf("%d",(day+2)%7);
    }
}
