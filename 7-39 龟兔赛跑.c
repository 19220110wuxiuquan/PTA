#include <stdio.h>
int main() 
{
    int tortoise = 0, rabbit = 0;
    int T;
    int is_rest = 0;
    scanf("%d", &T);
    int i;
    for (i = 1; i<=T; i++) 
    {
        tortoise += 3;
        if (is_rest == 0) 
        {
            rabbit += 9;
        }
        else 
        {
            is_rest--;
        }
        if (i % 10 == 0 && is_rest == 0) 
        {
            if (rabbit > tortoise) 
            {
                is_rest += 30;
            }
        }
    }
    if (rabbit >tortoise) 
    {
        printf("^_^ %d",rabbit);
    }
    else if(rabbit==tortoise)
    {
        printf("-_- %d",tortoise);
    }
    else
    {
        printf("@_@ %d",tortoise);
    }
    return 0;
}
