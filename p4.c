#include <stdio.h>
struct employee 
{
    int emp_id;
    char emp_name[50];
    float emp_salary;
};
int main() 
{
    struct employee e;
    float income_tax, net_sal;
    printf("Enter Employee ID: ");
    scanf("%d", &e.emp_id);
    printf("Enter Employee Name: ");
    scanf(" %s", e.emp_name);
    printf("Enter Employee Salary: ");
    scanf("%f", &e.emp_salary);
    income_tax = e.emp_salary * 0.10;
    net_sal = e.emp_salary - income_tax;
    printf("Employee ID     : %d\n", e.emp_id);
    printf("Employee Name   : %s\n", e.emp_name);
    printf("Employee Salary : %.2f\n", e.emp_salary);
    printf("Income Tax (10%): %.2f\n", income_tax);
    printf("Net Salary      : %.2f\n", net_sal);
}
