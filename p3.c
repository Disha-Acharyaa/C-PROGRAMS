#include <stdio.h>
struct employee 
{
    int emp_id;
    char emp_name[50];
    float emp_salary;
};
void main() 
{
    struct employee e;
    printf("Enter Employee ID: ");
    scanf("%d", &e.emp_id);
    printf("Enter Employee Name: ");
    scanf(" %s", e.emp_name);
    printf("Enter Employee Salary: ");
    scanf("%f", &e.emp_salary);
    printf("Employee ID: %d\n", e.emp_id);
    printf("Employee Name: %s\n", e.emp_name);
    printf("Employee Salary: %f\n", e.emp_salary);
}
