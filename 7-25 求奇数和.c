#include <stdio.h>

int main(void) {
    int temp, sum = 0;

    scanf("%d", &temp);
    while (temp > 0) {
        if (temp % 2 == 1) {
            sum += temp;
        }
        scanf("%d", &temp);
    }
    printf("%d\n", sum);

    return 0;
}
