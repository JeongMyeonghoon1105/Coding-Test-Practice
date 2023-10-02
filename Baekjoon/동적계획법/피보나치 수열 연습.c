#include <stdio.h>

int memo[100] = {0, 1};

int f(int i) {
  if (i <= 1)
    return i;
  if (memo[i] == 0)
    memo[i] = f(i-1) + f(i-2);
  return memo[i];
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", f(n));
  for (int i = 0; i <= n; i++)
    printf("%d ", memo[i]);
  printf("\n");
  return 0;
}
