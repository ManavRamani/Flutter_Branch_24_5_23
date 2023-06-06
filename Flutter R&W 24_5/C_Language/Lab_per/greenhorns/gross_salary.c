/* Write a program to find net salary, take salary from user and
        add 10% hra, 20% ta, 30% da then subtract 10% pf, and
                200 rs as professional tax and find gross salary. */

#include <stdio.h>

void main()
{
    float salary, hra, ta, da, pf, prof_tax, gross_salary, net_salary;

    printf("\n Enter the Salary : ");
    scanf("%f", &salary);

        // 10% of salary as HRA : (House Rent Allowance)
    hra = 0.1 * salary;
        // 20% of salary as TA : (Travel Allowance)
    ta = 0.2 * salary;
        // 30% of salary as DA : (Dearness Allowance)
    da = 0.3 * salary;
        // 10% of salary as PF : (Provident Fund)
    pf = 0.1 * salary;
        // Fixed professional tax
    prof_tax = 200;

        // Gross salary calculation
    gross_salary = salary + hra + ta + da;

        // Net salary calculation
    net_salary = gross_salary - pf - prof_tax;

    printf("\n Gross Salary : %.2f\n", gross_salary);
    printf("\n Net Salary : %.2f\n", net_salary);

}
