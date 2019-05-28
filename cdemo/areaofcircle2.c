#include <stdio.h>

float areaOfCircle(float r){
  return r*r*3.14;
}

void main() {
  char input[256];
  int r;
  int r2;

  printf("Input a radius\n");

  while(1){
    fgets(input, 256, stdin);
    if(sscanf(input, "%d", &r) == 1) break;
    printf("Invalid input\n");
  }

  printf("Input 2\n");

  while(1){
    fgets(input, 256, stdin);
    if(sscanf(input, "%d", &r2) == 1) break;
    printf("Invalid input\n");
  }


  printf("Area: %f - %f\n", areaOfCircle(r), areaOfCircle(r2));


  //for(float i=3.5; i<13; i++){
  //  printf("%f\n", areaOfCircle(i));
  //}
}
