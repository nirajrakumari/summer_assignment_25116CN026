// to rotate the string left
#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    int positions, l, i, j;
    char first_char;

    printf("enter string:\n");
    gets(arr); 
    l = strlen(arr);

    printf("enter number of positions to rotate left: ");
    scanf("%d", &positions);
    // position>array length
    positions = positions % l; 
    for (i = 0; i < positions; i++) {
        first_char = arr[0]; 
        for (j = 0; j < l - 1; j++) {
            arr[j] = arr[j + 1];
        }   
        arr[l - 1] = first_char;
    }
    printf("Rotated string: %s\n", arr);

    return 0;
}
