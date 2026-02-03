#include <stdio.h>

struct studentDetails {
  char name[50];
  int age;
  float total_marks;
} typedef Student;

struct timeDetails {
  char members[50];
  int hours, minutes, seconds;
} typedef Time;
int main() {

  Student student1, student2;
  printf("Input details for studnet 1: \n");
  printf("Name: ");
  scanf("%s", student1.name); // why wont it need this &?
  printf("Age: ");
  scanf("%d", &student1.age);
  printf("Total Marks: ");
  scanf("%f", &student1.total_marks);
  // Student 2
  printf("Input details for studnet 2: \n");
  printf("Name: ");
  scanf("%s", student2.name); // why wont it need this &?
  printf("Age: ");
  scanf("%d", &student2.age);
  printf("Total Marks: ");
  scanf("%f", &student2.total_marks);

  // print info
  printf("\nStudent 1 information: \n");
  printf("Name: %s\n", student1.name);
  printf("Age: %d\n", student1.age);
  printf("Name: %.2f\n", student1.total_marks);
  printf("\n");
  printf("Student 2 informmation: \n");
  printf("Name: %s\n", student2.name);
  printf("Age: %d\n", student2.age);
  printf("Name: %.3f\n", student2.total_marks);

  return 0;
}
