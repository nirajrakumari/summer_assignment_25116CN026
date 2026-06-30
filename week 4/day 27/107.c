// salary management system
#include <stdio.h>
#include <string.h>

// Structure declaration
struct Employee {
    int empId;
    char empName[50];
    char designation[30];
    float basicSalary;
    float hra;         // House Rent Allowance
    float da;          // Dearness Allowance
    float grossSalary; // Total Earnings
    float tax;         // Tax Deduction
    float netSalary;   // Take-home Pay
};

int main() {
    struct Employee emp;

    printf("========================================\n");
    printf("     SALARY MANAGEMENT SYSTEM INPUT     \n");
    printf("========================================\n");

    // 1. Input Employee ID
    printf("Enter Employee ID: ");
    scanf("%d", &emp.empId);
    
    // Clear the leftover newline character from the buffer before gets()
    getchar(); 

    // 2. Input Employee Name using gets()
    printf("Enter Employee Name: ");
    gets(emp.empName);

    // 3. Input Designation using gets()
    printf("Enter Designation: ");
    gets(emp.designation);

    // 4. Input Basic Salary
    printf("Enter Basic Salary (INR): ");
    scanf("%f", &emp.basicSalary);

    // 5. Calculate Allowances and Deductions (Standard Rules)
    emp.hra = emp.basicSalary * 0.20; // 20% of Basic Salary
    emp.da = emp.basicSalary * 0.10;  // 10% of Basic Salary
    
    // Gross Salary = Basic + HRA + DA
    emp.grossSalary = emp.basicSalary + emp.hra + emp.da;

    // Income Tax Calculation (Example: 5% if Gross Salary is above 50,000)
    if (emp.grossSalary > 50000) {
        emp.tax = emp.grossSalary * 0.05;
    } else {
        emp.tax = 0.0;
    }

    // Net Salary = Gross Salary - Tax
    emp.netSalary = emp.grossSalary - emp.tax;

    // 6. Display Salary Slip
    printf("\n========================================\n");
    printf("              SALARY SLIP               \n");
    printf("========================================\n");
    printf("ID:          %d\n", emp.empId);
    printf("Name:        %s\n", emp.empName);
    printf("Designation: %s\n", emp.designation);
    printf("----------------------------------------\n");
    printf("Basic Salary:      INR %.2f\n", emp.basicSalary);
    printf("HRA (20%%):         INR %.2f\n", emp.hra);
    printf("DA (10%%):          INR %.2f\n", emp.da);
    printf("----------------------------------------\n");
    printf("GROSS SALARY:      INR %.2f\n", emp.grossSalary);
    printf("Tax Deduction:     INR %.2f\n", emp.tax);
    printf("----------------------------------------\n");
    printf("NET TAKE-HOME PAY: INR %.2f\n", emp.netSalary);
    printf("========================================\n");

    return 0;
}
