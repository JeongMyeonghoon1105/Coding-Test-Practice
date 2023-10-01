#include <stdio.h>

int n = 0, max = 0;
void sumup(int * s, int i, int m, int c);

int main() {
  scanf("%d", &n);
  int * s = (int*)malloc(sizeof(int)*n);

  for (int i = 0; i < n; i++)
    scanf("%d", &s[i]);

  sumup(s, n-1, 0, 0);
  printf("%d\n", max);
}

void sumup(int * s, int i, int m, int c) {
  m += s[i];

  if (i == 1 && c <= 0)
    m += s[0];
  if (i <= 1) {
    if (max < m)
      max = m;
    return;
  }
  
  if (c < 1)
    sumup(s, i-1, m, c+1);
  sumup(s, i-2, m, 0);
}
