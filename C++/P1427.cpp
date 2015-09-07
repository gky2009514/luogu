#include <stack>
#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void) {
    int a;
    stack<int> stk;
    while (scanf("%d", &a) == 1) {
        if (a == 0)
            break;
        stk.push(a);
    }
    if (stk.empty())
        return EXIT_SUCCESS;
    printf("%d", stk.top());
    stk.pop();
    while (!stk.empty()) {
        printf(" %d", stk.top());
        stk.pop();
    }
    putchar('\n');
    return EXIT_SUCCESS;
}
