#include <stdio.h>
#include "student.h"
#include <string.h>

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
