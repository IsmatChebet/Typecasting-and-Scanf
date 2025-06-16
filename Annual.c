#include <stdio.h>

void calculateAnnualSalary() {
    double hourly_wage;
    int hours_per_week = 40;
    int weeks_per_year = 52;
    double annual_salary;


    printf("Enter hourly wage (UGX): ");
    scanf("%lf", &hourly_wage);

    annual_salary = hourly_wage * (double)hours_per_week * weeks_per_year;


    printf("\n--- Salary Calculation Details ---\n");
    printf("Hourly Wage: UGX %.2lf\n", hourly_wage);
    printf("Working Hours Per Week: %d\n", hours_per_week);
    printf("Weeks Per Year: %d\n", weeks_per_year);
    printf("Annual Salary: UGX %.2lf\n", annual_salary);
}


int main() {

    calculateAnnualSalary();

    return 0;
}
