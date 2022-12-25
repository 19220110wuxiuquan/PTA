#include <stdio.h>
int main()
{
    int n, f, y, x, z, p;
    scanf("%d", &n);
    for (f = 0; f < 100; f++)
    {
        for (y = 0; y < 100; y++)
        {
            z = 2 * y * 100 + 2 * f + n;
            p = f * 100 + y;
            if (p == z)
            {
                printf("%d.%d", y, f);
                return 0;
            }
        }
    }
    printf("No Solution");
    return 0;
}
