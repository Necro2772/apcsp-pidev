#include <stdio.h>
#include <string.h>



int main()
{
  char str1[26];

  for(int i=0; i<26; i++){
    str1[i] = 'a' + i;
  }

  char str2[26];
  strcpy(str2, str1);

  if(strcmp(str1, str2) == 0){
    printf("same\n");
  }
  else{
    printf("not the same\n");
  }

  for(int i=0; i<26; i++){
    str2[i] -= 32;
  }

  if(strcmp(str1, str2) == 0){
    printf("same\n");
  }
  else{
    printf("not the same\n");
  }

  char str3[52];
  strcpy(str3, str1);
  
  for(int i=0; i<26; i++){
    printf("%c", str1[i]);
  }
  printf("\n");
  for(int i=0; i<26; i++){
    printf("%c", str2[i]);
  }
  printf("\n");

  strcat(str3, str2);
  for(int i=0; i<53; i++){
    if(i!=26){
      printf("%c", str3[i]);
    }
  }
  printf("\n");

/*
  // str1 is a pointer to a constant - cannot change the contents of str1
  char* str1 = "hello1";
  
  printf("str1 : %s\n", str1);

  // DO NOT DO THIS - attempt to modify a character in a string constant
  //   compiler will not complain though
  //*(str1 + 3) = 'c';


  
  // str2 is an array which holds a copy of the string constant
  char str2[7] = "hello2";
  
  printf("str2 : %s\n", str2);

  char* str2p = str2;
  *(str2p + 3) = 'c';  // OK to modify array
  printf("str2 : %s\n", str2p);
  

  
  // str3 is also an array which holds a copy of the constant
  //   intialized to hold the string length
  char str3[] = "this is a test";
  printf("str3 : %s\n", str3);

  str3[3] = 'f';
  printf("str3 : %s\n", str3);
*/
}
