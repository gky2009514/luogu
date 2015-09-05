#include <cstdio>
#include <cstdlib>

const int N = 7;

int main(void) {
    int a, b, ma = 0, index = 0;
    for (int i = 1; i <= N; i++) {
        scanf("%d %d", &a, &b);
        if (a + b > ma) {
            ma = a + b;
            index = i;
        }
    }
    printf("%d\n", index);
    return EXIT_SUCCESS;
}
