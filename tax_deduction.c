#include <stdio.h>

int main()
{
    printf("\n\t********* Calculate Net Salary **********\n\n");
    // Declaring variables
    float base_salary, tax_rate, tax, net_salary;

    printf("Enter Base Salary: ");
    scanf("%f", &base_salary);
    getchar();
    printf("Enter tax rate(in %%): ");
    scanf("%f", &tax_rate);
    getchar();

    // Applying tax on the base salary (here I've used only one salary barrier of 100000, you can add more salary barriers)
    if (base_salary < 0){
        printf("\nInvalid base salary!\n");
    }
    else if (base_salary >= 100000){
        tax = base_salary*(tax_rate/100);
        net_salary = base_salary - tax;
    }
    else if (base_salary < 100000){
        net_salary = base_salary;
    }
    else{
        printf("\nInvalid input!\n");
    }

    // Printing net salary after applying tax.
    printf("\nNet Salary is %0.3f\n", net_salary);
    return 0;
}