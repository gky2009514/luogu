#include <stack>
#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

const int N = 105;

int beauty[N], num[N];

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &beauty[i]);
    for (int i = 1; i < n; i++) {
        int k = 0;
        for (int j = 0; j < i; j++) {
            if (beauty[j] < beauty[i])
                k++;
        }
        num[i] = k;
    }
    if (n <= 0)
        return EXIT_SUCCESS;
    printf("%d", num[0]);
    for (int i = 1; i < n; i++)
        printf(" %d", num[i]);
    putchar('\n');
    return EXIT_SUCCESS;
}
