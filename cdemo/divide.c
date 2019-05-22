#include <stdio.h>

int main(){
int div = 5;
  for(int i = 0 ; i < 100; i++){
    if (0 == (i % div)){
      printf("%d\n", i);
    }
  }
}
