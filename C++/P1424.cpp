#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void) {
    int x, n;
    scanf("%d %d", &x, &n);
    int sum = 250 * 5 * (n / 7);
    n %= 7;
    for (int i = x; i < x + n; i++) {
        int j = i % 7;
        if (j != 6 && j != 0)
            sum += 250;
    }
    printf("%d\n", sum);
    return EXIT_SUCCESS;
}
