#include <stdio.h>
#include <string.h>

// Structure declaration
struct Contact {
    int contactId;
    char name[50];
    char phoneNumber[15];
    char email[50];
    char groupType[20]; // Family, Work, Friend
};

int main() {
    struct Contact person;

    // 1. Input Contact ID
    printf("Enter Contact ID: ");
    scanf("%d", &person.contactId);
    
    // Clear the leftover newline character from the buffer before gets()
    getchar(); 

    // 2. Input Contact Details using gets()
    printf("Enter Contact Name: ");
    gets(person.name);

    printf("Enter Phone Number: ");
    gets(person.phoneNumber);

    printf("Enter Email Address: ");
    gets(person.email);

    printf("Enter Group Type (Family/Work/Friends): ");
    gets(person.groupType);

    // 3. Display Contact Card (Your Exact Style)
    printf("\n========================================\n");
    printf("        CONTACT MANAGEMENT SYSTEM        \n");
    printf("========================================\n");
    printf("ID:          %d\n", person.contactId);
    printf("Name:        %s\n", person.name);
    printf("Group:       %s\n", person.groupType);
    printf("----------------------------------------\n");
    printf("Phone:       %s\n", person.phoneNumber);
    printf("Email:       %s\n", person.email);
    printf("----------------------------------------\n");
    
    // Simple validation string to check if minimum entry requirement is met
    printf("Status:      %s\n", (strlen(person.phoneNumber) >= 10) ? "VALID CONTACT" : "INVALID NUMBER");
    printf("========================================\n");

    return 0;
}
