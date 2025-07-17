#include <stdio.h>

// Function declarations
void calculateTax(float *gross, float *tax); // Calculates tax based on gross salary
void medicationInsurance(float *gross, float *insurance); // Calculates medication insurance
void maternityLeave(float *gross, float *maternity); // Calculates maternity leave deduction
void socialSecurity(float *gross, float *social); // Calculates social security deduction
void netSalaryCalculator(float gross, float *net); // Calculates net salary

int main() {
    float gross, net;

    // Prompt user for gross salary
    printf("Enter gross salary: ");
    scanf("%f", &gross);

    // Calculate net salary
    netSalaryCalculator(gross, &net);

    // Display net salary
    printf("Net Salary: $%.2f\n", net);

    return 0;
}

// Calculates tax based on gross salary
void calculateTax(float *gross, float *tax) {
    if (*gross <= 100)
        *tax = 0;
    else if (*gross <= 300)
        *tax = (*gross) * 0.20;
    else
        *tax = (*gross) * 0.28;
}

// Calculates medication insurance deduction
void medicationInsurance(float *gross, float *insurance) {
    *insurance = (*gross) * 0.05;
}

// Calculates maternity leave deduction
void maternityLeave(float *gross, float *maternity) {
    *maternity = (*gross) * 0.003;
}

// Calculates social security deduction
void socialSecurity(float *gross, float *social) {
    *social = (*gross) * 0.03;
}

// Calculates net salary after all deductions
void netSalaryCalculator(float gross, float *net) {
    float tax, insurance, maternity, social;

    calculateTax(&gross, &tax);
    medicationInsurance(&gross, &insurance);
    maternityLeave(&gross, &maternity);
    socialSecurity(&gross, &social);

    // Subtract all deductions from gross to get net salary
    *net = gross - (tax + insurance + maternity + social);
}