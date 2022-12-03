#include <stdio.h>
int main()
{
    int a, b, temp, month;
    int N;
    scanf("%d", &N);
    a = 0;
    b = 1;
    month = 1;
    while(b<N)
    {
        month++;
        temp = a;
        a = b;
        b += temp;
    }
    printf("%d\n", month);

    return 0;
}
