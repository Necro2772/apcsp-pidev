#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);

  b = c;
  c = a;
  a = b;
  printf("a = %d, b = %d, c = %d\n", a, b, c);
}
