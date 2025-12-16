/*
Name:Shem sammy
Reg No:PA106/G/28607/25
Date:2nd Nov 2025
Description: A C Program to calculate and print gross pay, taxes and net pay
*/
#include <stdio.h>

int main() {
    float hours_worked, hourly_wage;
    float gross_pay, taxes, net_pay;
    float overtime_hours;

    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);

    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    if (hours_worked > 40) {
        overtime_hours = hours_worked - 40;
        gross_pay = (40 * hourly_wage) + (overtime_hours * hourly_wage * 1.5);
    } else {
        gross_pay = hours_worked * hourly_wage;
    }

    if (gross_pay <= 600) {
        taxes = 0.15 * gross_pay;
    } else {
        taxes = (0.15 * 600) + (0.20 * (gross_pay - 600));
    }

    net_pay = gross_pay - taxes;

    printf("\nGross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}
