#include <stdio.h>
#include <math.h>
 
double a3, a2, a1, a0;
double f(double r);
int main() {
    double a, b, mid;
    scanf("%lf%lf%lf%lf", &a3, &a2, &a1, &a0);
    scanf("%lf%lf", &a, &b);
    if (fabs(f(a)) < 1e-5) {
        printf("%.2f\n", a);
    }
    else if (fabs(f(b)) < 1e-5) {
        printf("%.2f\n", b);
    }
    else if (f(a) * f(b) < 0) {
        while (fabs(a - b) > 1e-5) {
            mid = (a + b) / 2;
            if (fabs(f(mid)) < 1e-5) {
                printf("%.2f\n", mid);
                break;
            }
            else if (f(a)* f(mid) < 0) {
                b = mid;
            }
            else {
                a = mid;
            }
        }
        if (fabs(a - b) <= 1e-5) {
            printf("%.2f", (a + b) / 2);
        }
    }
    return 0;
}
 
double f(double r)
{
    double ret;
    ret = a3 * pow(r, 3) + a2 * pow(r, 2) + a1 * pow(r, 1) + a0;
    return ret;
}
