#include <stdio.h>
#include <string.h>

struct Student {
  char firstName[50];
  char lastName[50];
  int age;
  int id;
};


void printStudent(struct Student* student)
{
  
  printf("%s %s\n", student->firstName, student->lastName);
  printf("  age:%d\n", student->age);
  printf("  id:%d\n", student->id);
}

void addStudent(struct Student* student, char first[50], char last[50], int age, int id){
  strcpy(student->firstName, first);
  strcpy(student->lastName, last);
  student->age = age;
  student->id = id;
}

int main(){
  char input[50];

  char name[50];
  char first[50];
  char last[50];
  int age;
  int id;

  int i = 0;

  struct Student students[10];
  char in[10];

  while(1){
    printf("Add a student:\n");
    fgets(input, 50, stdin);
    sscanf(input, "%s", name);
    fgets(input, 50, stdin);
    sscanf(input, "%s", first);
    fgets(input, 50, stdin);
    sscanf(input, "%s", last);
    fgets(input, 10, stdin);
    sscanf(input, "%d", &age);
    fgets(input, 10, stdin);
    sscanf(input, "%d", &id);

    struct Student name;
    addStudent(&name, first, last, age, id);
    students[i] = name;
    i++;
    
    printf("Done? y/n\n");
    fgets(input, 50, stdin);
    sscanf(input, "%s", in);
    printf("%s\n", in);
    if(!(in[0] == 'n')) {break;};
  }
  
  for(int i = 0; i < sizeof(students); i++){
    printStudent(&students[0]);
  }

}
