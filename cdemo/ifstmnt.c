#include <stdio.h>

int main()
{
  int a = 0;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }

  if (a != 0)
  {
    printf("a is not 0\n");
  }
  else
  {
    printf("a is 0\n");
  }
  if (a > 0)
  {
    printf("a is greater than 0\n");
  }
  else
  {
    printf("a is not greater than 0\n");
  }
  if (a >= 0)
  {
    printf("a is greater then or equal to 0\n");
  }
  else
  {
    printf("a is not greater then or equal to 0\n");
  }
  if (a == 0 && a < 0)
  {
    printf("a is equal to and less than 0\n");
  }
  else
  {
    printf("a is not equal to and less than 0\n");
  }
  if (a == 0 || a < 0)
  {
    printf("a is equal to or less than 0\n");
  }
  else
  {
    printf("a is not equal to or less than 0\n");
  }
  if (!(a == 0))
  {
    printf("a is not equal to 0\n");
  }
  else
  {
    printf("a is equal to 0\n");
  }
}
