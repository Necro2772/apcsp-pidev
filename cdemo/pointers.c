#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
  
  float d = 1.5;
  float e = 5.4;
  printf("d = %f, e = %f\n", d, e);
  float* ptrd = &d;
  float* ptre = &e;

  float tmp = d;
  *ptrd = e;
  *ptre = tmp;
  printf("d = %f, e = %f\n", *ptrd, *ptre);

}
