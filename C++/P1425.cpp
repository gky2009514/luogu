#include <cstdio>
#include <cstdlib>

int main(void) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int t = (c * 60 + d) - (a * 60 + b);
    printf("%d %d\n", t / 60, t % 60);
    return EXIT_SUCCESS;
}
