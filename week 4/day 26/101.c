#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL)); 
    int lower = 1, upper = 100; 
    int computer_input = (rand() % (upper - lower + 1)) + lower; 
    int n;          
    int c = 0;      
    printf("Guess the number (between %d and %d): ", lower, upper);
 // Use a do-while loop
    do {
        scanf("%d", &n);
        c++; 
        if (n < computer_input) {
            printf("The number is greater than %d. Guess again: ", n);
        } else if (n > computer_input) {
            printf("The number is smaller than %d. Guess again: ", n);
        }   
    } while (n != computer_input);
    printf("\nCongratulations!\n");
    printf("The number was: %d\n", computer_input);
    printf("Total number of guesses: %d\n", c);
    return 0;
}

