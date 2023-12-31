#include <stdio.h>

unsigned int power(unsigned int a, unsigned int b, unsigned int c) {
  if (b == 1)
    return a % c;
  else if (b == 0)
    return 1;
  unsigned int result = 1;
  if (b % 2 == 1)
    result *= a;
  result *= (power(a, b / c, c) * power(a, b / c, c));
  result %= c;
  return result;
}

int main() {
  unsigned int a, b, c, result;  scanf("%u %u %u", &a, &b, &c);
  result = power(a, b, c);
  printf("%u\n", result);
  return 0;
}
