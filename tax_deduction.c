#include <stdio.h>

int main()
{
    printf("\n\t********* Calculate Net Salary **********\n\n");
    float base_salary, tax, net_salary;
    printf("Enter Basic Salary: ");
    scanf("%f", &base_salary);
    getchar();
    if (base_salary >= 10000){
        tax = base_salary*0.15;
        net_salary = base_salary - tax;
    }
    else if (base_salary < 10000){
        net_salary = base_salary;
    }
    printf("\nNet Salary is %0.3f\n", net_salary);
    return 0;
}