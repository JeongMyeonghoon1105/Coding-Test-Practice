#include <stdio.h>

#define LIMIT 100000

int memo[LIMIT] = {0, 1};

int f(int n) {
    if (n <= 1)
        return n;
    else if (n > LIMIT)
        fprintf(stderr, "Out of range.\n");
        return -1;
    for (int i = 1; i <= n; i++)
        memo[i] = memo[i-1] + memo[i-2];
    return memo[n];
}

int main() {
    int n;  scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}
