// mini project
#include <stdio.h>
#include <string.h>

struct library {
    char EmpName[50];
    char department[50];
    float salary;
    int id;
} s[100];

int main() {
    int i = 1;
    int idemp;
    int choice;
    int current_count = 5;

    s[0].id = i;
    strcpy(s[0].EmpName, "Dharmveer Tiwari");
    strcpy(s[0].department, "Cyber security");
    s[0].salary = 260;
    
    s[1].id = i + 1;
    strcpy(s[1].EmpName, "Divya Prakash Dubey");
    strcpy(s[1].department, "HR head");
    s[1].salary = 150;
    
    s[2].id = i + 2;
    strcpy(s[2].EmpName, "Fyodor Dostoevsky");
    strcpy(s[2].department, "labour organisation");
    s[2].salary = 300;
    
    s[3].id = i + 3;
    strcpy(s[3].EmpName, "Gaurav tiwari nirala");
    strcpy(s[3].department, "cyberhead");
    s[3].salary = 150;
    
    s[4].id = i + 4;
    strcpy(s[4].EmpName, "Musaafir cafee");
    strcpy(s[4].department, "HR head");
    s[4].salary = 200;

    printf("\n======== EMPLOYEE MANAGEMENT SYSTEM ==========\n");
    do {
        printf("\n-------------------------------------------");
        printf("\nenter 0 to get list of employees\nenter 1 to get report of employee\nenter"
            " 2 to add an employee\nenter 3 to exit\n");
        printf("enter your choice!!\n");
        scanf("%d", &choice);
        getchar(); 
        if (choice == 0) {
            printf("\n--- Employee List ---\n");
            for (int i = 0; i < current_count; i++) {
                printf("%d\n", s[i].id);
                puts(s[i].EmpName);
            }
        }
        else if (choice == 1) {
            for (int i = 0; i < current_count; i++) {
                printf("employee Id: %d\n", s[i].id);
                printf("employee Name: ");
                puts(s[i].EmpName);
            }
            printf("enter the emp id to find record\n");
            scanf("%d", &idemp);
            if (idemp >= 1 && idemp <= current_count) {
                printf("record found successfully!!\n");
                printf("Emp Id: %d\n", s[idemp - 1].id);
                printf("Employee Name: ");
                puts(s[idemp - 1].EmpName);
                printf("Department Name: ");
                puts(s[idemp - 1].department);
                printf("Salary: %.2f\n", s[idemp - 1].salary);
            }
            else {
                printf("invalid id . record not found!!\n");
            }
        }
        else if (choice == 2) {
            if (current_count >= 100) {
                printf("Error: Employee database storage cap hit.\n");
                continue;
            }

            printf("enter the emp id you want to add: ");
            scanf("%d", &s[current_count].id);
            getchar(); 
            
            printf("enter employee name: ");
            gets(s[current_count].EmpName);
            
            printf("enter the department name: ");
            gets(s[current_count].department);
            
            printf("enter salary: ");
            scanf("%f", &s[current_count].salary);
            
            current_count++; 
            printf("\nemployee added successfully\n\n");
            
            for (int i = 0; i < current_count; i++) {
                printf("employee Id: %d\n", s[i].id);
                printf("Employee Name: ");
                puts(s[i].EmpName);
                printf("Department Name: ");
                puts(s[i].department);
                printf("Salary: %.2f\n\n", s[i].salary);
            }
        }
        else if (choice == 3) {
            printf("\nexiting the system.\nThank you !!\n");
        }
        else {
            printf("--Invalid choice--\n");
        }
    } while (choice != 3);

    return 0;
}
