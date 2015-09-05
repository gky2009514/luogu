#include <cstdio>
#include <cstdlib>

int main(void) {
    int a;
    scanf("%d", &a);
    double r = 0.0;
    if (a > 400) {
        r += 0.5663 * (a - 400);
        a = 400;
    }
    if (a > 150) {
        r += 0.4663 * (a - 150);
        a = 150;
    }
    r += 0.4463 * a;
    printf("%.1lf\n", r);
    return EXIT_SUCCESS;
}
