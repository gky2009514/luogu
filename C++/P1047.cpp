#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

const int N = 10005;

bool flag[N];

int main(void) {
    int L, M;
    scanf("%d %d", &L, &M);
    int st, ed;
    while (M--) {
        scanf("%d %d", &st, &ed);
        for (int i = st; i <= ed; i++)
            flag[i] = true;
    }
    int num = 0;
    for (int i = 0; i <= L; i++) {
        if (!flag[i])
            num++;
    }
    printf("%d\n", num);
    return EXIT_SUCCESS;
}
