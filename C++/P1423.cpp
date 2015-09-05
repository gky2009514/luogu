#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void) {
    double x;
    scanf("%lf", &x);
    double s = 2.0, sum = 0;
    int step = 0;
    while (sum < x) {
        sum += s;
        s *= 0.98;
        step++;
    }
    printf("%d\n", step);
    return EXIT_SUCCESS;
}
