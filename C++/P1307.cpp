#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void) {
    int n, r = 0;
    scanf("%d", &n);
    while (n) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    printf("%d\n", r);
    return EXIT_SUCCESS;
}
