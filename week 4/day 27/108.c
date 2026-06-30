// marksheet generation system
#include <stdio.h>
#include <string.h>

#define NUM_SUBJECTS 3

// Structure declaration
struct Marksheet {
    char studentName[50];
    int rollNumber;
    float marks[NUM_SUBJECTS];
    float total;
    float percentage;
};

int main() {
    struct Marksheet student;
    student.total = 0;

    // 1. Input Student Name using gets()
    printf("Enter Student Name: ");
    gets(student.studentName); // Reads the whole line including spaces

    // 2. Input Roll Number
    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNumber);

    // 3. Input Marks for subjects
    printf("\nEnter marks for %d subjects (out of 100):\n", NUM_SUBJECTS);
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
        student.total += student.marks[i]; // Calculate total
    }

    // 4. Calculate Percentage
    student.percentage = (student.total / (NUM_SUBJECTS * 100)) * 100;

    // 5. Display Marksheet
    printf("\n========================================\n");
    printf("           STUDENT MARKSHEET            \n");
    printf("========================================\n");
    printf("Name:        %s\n", student.studentName);
    printf("Roll No:     %d\n", student.rollNumber);
    printf("----------------------------------------\n");
    
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Subject %d:   %.2f / 100\n", i + 1, student.marks[i]);
    }
    
    printf("----------------------------------------\n");
    printf("Total Marks: %.2f / %d\n", student.total, NUM_SUBJECTS * 100);
    printf("Percentage:  %.2f%%\n", student.percentage);
    printf("Result:      %s\n", (student.percentage >= 40.0) ? "PASSED" : "FAILED");
    printf("========================================\n");

    return 0;
}
