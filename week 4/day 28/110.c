#include <stdio.h>
#include <string.h>

// Structure declaration
struct BankAccount {
    int accountNumber;
    char accountHolder[50];
    char accountType[20];
    float balance;
    float depositAmount;
    float withdrawAmount;
    float finalBalance;
};

int main() {
    struct BankAccount account;

    // 1. Input Account Details
    printf("Enter Account Number: ");
    scanf("%d", &account.accountNumber);
    
    // Clear the leftover newline character from the buffer before gets()
    getchar(); 

    // 2. Input Holder Name using gets()
    printf("Enter Account Holder Name: ");
    gets(account.accountHolder);

    // 3. Input Account Type using gets()
    printf("Enter Account Type (Savings/Current): ");
    gets(account.accountType);

    // 4. Input Financial Transactions
    printf("Enter Current Balance: ");
    scanf("%f", &account.balance);

    printf("Enter Amount to Deposit: ");
    scanf("%f", &account.depositAmount);

    printf("Enter Amount to Withdraw: ");
    scanf("%f", &account.withdrawAmount);

    // 5. Sequential Calculation
    account.finalBalance = account.balance + account.depositAmount - account.withdrawAmount;

    // 6. Display Bank Statement (Your Exact Style)
    printf("\n========================================\n");
    printf("          BANK ACCOUNT SYSTEM           \n");
    printf("========================================\n");
    printf("Acc No:      %d\n", account.accountNumber);
    printf("Holder:      %s\n", account.accountHolder);
    printf("Type:        %s\n", account.accountType);
    printf("----------------------------------------\n");
    printf("Old Balance: %.2f\n", account.balance);
    printf("Deposited:   +%.2f\n", account.depositAmount);
    printf("Withdrawn:   -%.2f\n", account.withdrawAmount);
    printf("----------------------------------------\n");
    printf("Net Balance: %.2f\n", account.finalBalance);
    
    // Condition check mapped exactly like your PASSED/FAILED line
    printf("Status:      %s\n", (account.finalBalance >= 1000.0) ? "ACTIVE" : "LOW BALANCE");
    printf("========================================\n");

    return 0;
}
