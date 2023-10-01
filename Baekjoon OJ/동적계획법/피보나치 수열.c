#include <stdio.h>

int memo[100] = {0, 1};

int f(int n) {
  if (n <= 1)
    return n;
  if (memo[n] == 0)
    memo[n] = f(n-1);
  return memo[n] + memo[n-1];
}

void print(int n) {
  printf("[");
  int i = 0;
  while (i < n) {
    printf("%d, ", memo[i]);
    i++;
  }
  printf("%d]\n", memo[n]);
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", f(n));
  print(n);
  return 0;
}