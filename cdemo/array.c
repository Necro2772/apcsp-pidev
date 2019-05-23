#include <stdio.h>


void arrayAdd(int* arr, int s, int n){
  for(int i=0; i<s; i++){
    arr[i] += n;
  }
}

int main()
{
  int arr[100];
  
  for (int i = 0; i < 100; i++)
  {
    arr[i] = i * i;
  }

  arrayAdd(arr, 100, 1);

  for (int i = 0; i < 100; i++)
  {
    printf("%d\n", arr[i]);
  }

/*  
  // create array to hold intialized values
  int arr2[] = { 1, 2, 3, 4 };
  for (int i = 0; i < 4; i++)
  {
    printf("%d, ", arr2[i]);
  }
  printf("\n");
  */
}

