#include <stdio.h>

float areaOfCircle(float r){
  return r*r*3.14;
}

void main() {
  char input[256];
  int r;

  printf("Input a radius\n");

  while(1){
    fgets(input, 256, stdin);
    if(sscanf(input, "%d", &r) == 1) break;
    printf("Invalid input\n");
  }
  printf("Area: %f\n", areaOfCircle(r));


  //for(float i=3.5; i<13; i++){
  //  printf("%f\n", areaOfCircle(i));
  //}
}
