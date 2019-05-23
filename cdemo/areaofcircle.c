#include <stdio.h>

float areaOfCircle(float r){
  return r*r*3.14;
}

void main() {
  for(float i=3.5; i<13; i++){
    printf("%f\n", areaOfCircle(i));
  }
}
