#include<stdio.h>
#include<stdlib.h>
#define NUMBEROFEMPLOYEES 4

//Defining a structure for an employee
struct employee{
  int id;
  char name[35];
  char designation[35];
  char department[35];
  float baseSal;
};

int main(){
  struct employee e[NUMBEROFEMPLOYEES];

  register int i;
  for(i = 0 ;i < NUMBEROFEMPLOYEES; i++){
    fflush(stdin);
    printf("Enter ID of employee: ");
    scanf("%d", &e[i].id);

    printf("Enter the name of employee: ");
    scanf("%s", e[i].name);

    printf("Enter the designation of the employee: ");
    scanf("%s", e[i].designation);

    printf("Enter the department of the employee: ");
    scanf("%s", e[i].department);

    printf("Enter the base salary of the employee: ");
    scanf("%f", &e[i].baseSal);
    fflush(stdin);
  }

  printf("The following details were entered:\n");
  for(i = 0; i < NUMBEROFEMPLOYEES ;i++){
    printf("ID: %d\n", e[i].id);
    printf("Name: %s\n", e[i].name);
    printf("Designation: %s\n", e[i].designation);
    printf("Department: %s\n", e[i].department);
    printf("Base Salary: %f\n", e[i].baseSal);
  }

}
