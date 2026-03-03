// Program to store and display employee details using structure

#include <stdio.h>

struct employee
{
    int emp_id;
    char name[20];
    float salary;
};

int main()
{
    struct employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("\nEmployee Details\n");
    printf("ID: %d\n", e.emp_id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    return 0;
}

