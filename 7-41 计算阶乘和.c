#include <stdio.h>

int main() {
    int S = 0;
    int m = 1;
    int i;
    int N;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        m = m * i;
        S = S + m;
    }
    printf("%d\n", S);
  return 0;
}
