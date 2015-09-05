#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

const int N = 10;

bool check(int a, int b, int c) {
    vector<bool> flag(N, false);
    flag[0] = true;
    while (a) {
        if (flag[a % 10])
            return false;
        flag[a % 10] = true;
        a /= 10;
    }
    while (b) {
        if (flag[b % 10])
            return false;
        flag[b % 10] = true;
        b /= 10;
    }
    while (c) {
        if (flag[c % 10])
            return false;
        flag[c % 10] = true;
        c /= 10;
    }
    return true;
}

int main(void) {
    for (int i = 123; i < 333; i++) {
        if (check(i, i << 1, i * 3))
            printf("%d %d %d\n", i, i << 1, i * 3);
    }
    return EXIT_SUCCESS;
}
