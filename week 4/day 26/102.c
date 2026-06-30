#include <stdio.h>

int main() {
    int age,left;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1 || age < 0) {
        printf("Invalid age entered!!\n");
    }
    else{
    if (age < 18) {
        left = 18 - age;
        if (left == 1) {
            printf("You are not eligible to vote. You can vote after %d year.\n",left);
        } else {
            printf("You are not eligible to vote. You can vote after %d years.\n",left);
        }
    } else if (age > 120) {
        printf("Invalid age entered!!\n");
    } else {
        printf("You are eligible to vote!\n");
    }
    }
    return 0;
}
