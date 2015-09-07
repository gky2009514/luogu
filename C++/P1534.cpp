#include <stack>
#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void) {
    int n, a, b;
    int p = 0, sum = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &a, &b);
        p = a + b + p - 8;
        sum += p;
    }
    printf("%d\n", sum);
    return EXIT_SUCCESS;
}
