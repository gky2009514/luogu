#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

const int N = 10;

int height[N];

int main(void) {
    for (int i = 0; i < N; i++)
        scanf("%d", &height[i]);
    int h, num = 0;
    scanf("%d", &h);
    for (int i = 0; i < N; i++) {
        if (height[i] <= h + 30)
            num++;
    }
    printf("%d\n", num);
    return EXIT_SUCCESS;
}
