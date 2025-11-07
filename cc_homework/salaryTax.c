#include <stdio.h>

void main()
{
    float salary, tax_amount = 0.0;
    
    printf("Enter your annual taxable salary: ");
    
    if (scanf("%f", &salary) != 1 || salary < 0) 
    {
        printf("Invalid input.\n");
        return;
    }

    if (salary <= 25000)
    {
        tax_amount = 0.0;
    }
    else if (salary <= 50000)
    {
        float taxable_portion = salary - 25000;
        tax_amount = taxable_portion * 0.10;
    }
    else // salary > 50000
    {
        // Fixed tax on the 25001-50000 range is 25000 * 0.10 = 2500
        tax_amount = 2500.0; 
        
        // Plus, 20% on the amount exceeding 50000
        float taxable_portion_third_slab = salary - 50000;
        tax_amount = tax_amount + (taxable_portion_third_slab * 0.20);
    }
    
    printf("Annual Salary: %.2f\n", salary);
    printf("Calculated Tax: %.2f\n", tax_amount);
    printf("Net Salary: %.2f\n", salary - tax_amount);
}