#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void) {
    int k;
    scanf("%d", &k);
    if (k < 1)
        return 1;
    int n = 2;
    double sum = 1;
    for (; sum <= k; n++)
        sum += 1.0 / n;
    printf("%d\n", n - 1);
    return EXIT_SUCCESS;
}
