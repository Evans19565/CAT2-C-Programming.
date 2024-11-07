#include <stdio.h>

// Function to calculate gross pay
float calculate_gross_pay(float hours_worked, float hourly_wage) {
    if (hours_worked <= 40) {
        return hours_worked * hourly_wage;
    } else {
        float regular_hours = 40;
        float overtime_hours = hours_worked - 40;
        float overtime_rate = 1.5 * hourly_wage;
        return (regular_hours * hourly_wage) + (overtime_hours * overtime_rate);
    }
}

// Function to calculate taxes
float calculate_taxes(float gross_pay) {
    if (gross_pay <= 600) {
        float tax_rate = 0.15;
        return gross_pay * tax_rate;
    } else {
        float tax_rate_1 = 0.15;
        float tax_rate_2 = 0.20;
        float taxable_amount_1 = 600;
        float taxable_amount_2 = gross_pay - 600;
        return (taxable_amount_1 * tax_rate_1) + (taxable_amount_2 * tax_rate_2);
    }
}

// Function to calculate net pay
float calculate_net_pay(float gross_pay, float taxes) {
    return gross_pay - taxes;
}

int main() {
    float hours_worked, hourly_wage, gross_pay, taxes, net_pay;

    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);

    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    gross_pay = calculate_gross_pay(hours_worked, hourly_wage);
    taxes = calculate_taxes(gross_pay);
    net_pay = calculate_net_pay(gross_pay, taxes);

    printf("\nGross Pay: %.2f\n", gross_pay);
    printf("Taxes: %.2f\n", taxes);
    printf("Net Pay: %.2f\n", net_pay);

    return 0;
  }
