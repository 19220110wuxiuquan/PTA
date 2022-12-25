#include<stdio.h>
#include<math.h>

void Comp(int n);

int main(void)
{
    int num;
    scanf("%d", &num);
    Comp(num);
    return 0;
}
void Comp(int n)
{
    int x, y;
    double result;
    for (int i = 0; i < n;i++)
    {
        scanf("%d %d", &x, &y);
        result = (x - 100) * 0.9*2;
        if(fabs(y-result)<0.1*result)
            printf("You are wan mei!\n");
            else if(y>result)
                printf("You are tai pang le!\n");
                else
                    printf("You are tai shou le!\n");
    }
}
