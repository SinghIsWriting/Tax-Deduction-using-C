#include <stdio.h>

int main()
{
    printf("\n\t********* Calculate Net Salary **********\n\n");
    float bs, tax, ns;
    printf("Enter Basic Salary: ");
    scanf("%f", &bs);
    getchar();
    if (bs >= 10000){
        tax = bs*0.15;
        ns = bs - tax;
    }
    else if (bs < 10000){
        ns = bs;
    }
    printf("\nNet Salary is %0.3f\n", ns);
    return 0;
}