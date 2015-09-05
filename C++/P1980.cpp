#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

int getNum(int d, int x) {
    int r = 0;
    while (d) {
        if (d % 10 == x)
            r++;
        d /= 10;
    }
    return r;
}

int main(void) {
    int n, x;
    int num = 0;
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++)
        num += getNum(i, x);
    printf("%d\n", num);
    return EXIT_SUCCESS;
}
