// to find longest word
#include <stdio.h>
#include <string.h>

int main() {
    int i = 0, l;
    int c = 0;        // Tracks current word length
    int max = 0;      // Tracks maximum word length found
    int start_index = 0; // Tracks starting position of the longest word
    char arr[100];    // Increased array size for full sentences
    printf("enter string\n");
    gets(arr);
    l = strlen(arr); 
    for (i = 0; i <= l; i++) {
        if (arr[i] != ' ' && arr[i] != '\0') {
            c++;
        } 
        else {
            if (c > max) {
                max = c;
                start_index = i - c;
            }
            c = 0; 
        }
    }
    printf("\nLongest word is: ");
    for (i = start_index; i < start_index + max; i++) {
        putchar(arr[i]);
    }
    printf("\nLength of longest word is: %d\n", max);
    return 0;
}
