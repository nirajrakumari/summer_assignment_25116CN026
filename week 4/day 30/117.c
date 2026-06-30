// record of students
#include <stdio.h>
#include<string.h>
struct student {
    char Name[50];
    int roll;
    float marks// marks out of 100;
};
int main() {
    int i;
    int size;
    printf("enter the number of students");
    scanf("%d",&size);
    getchar();
    struct student s[size];
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < size; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        gets(s[i].Name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        getchar();
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < size; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].Name);
        printf("Marks: %.2f", s[i].marks);
        printf("\n");
    }
    return 0;
}
