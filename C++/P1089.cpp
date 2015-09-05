#include <cstdio>
#include <cstdlib>

const int N = 12;

int main(void) {
    int a, hand = 0;
    int sum = 0, index = 0;
    for (int i = 1; i <= N; i++) {
        scanf("%d", &a);
        if (index != 0)
            continue;
        if (hand + 300 - a < 0)
            index = -i;
        int t = (hand + 300 - a) / 100;
        hand += 300 - a - t * 100;
        sum += t * 100;
    }
    if (index != 0)
        printf("%d\n", index);
    else
        printf("%d\n", sum / 5 * 6 + hand);
    return EXIT_SUCCESS;
}
