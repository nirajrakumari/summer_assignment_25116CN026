#include <stdio.h>
#include <string.h>

// Structure declaration matching your exact layout style
struct Book {
    int bookId;
    char bookTitle[50];
    char author[50];
    float price;
    int totalCopies;
    int issuedCopies;
    int availableCopies; // Dynamic element calculated sequentially
};

int main() {
    struct Book book;

    // 1. Input Book ID
    printf("Enter Book ID: ");
    scanf("%d", &book.bookId);
    
    // Clear the leftover newline character from the buffer before gets()
    getchar(); 

    // 2. Input Book Title using gets()
    printf("Enter Book Title: ");
    gets(book.bookTitle);

    // 3. Input Author Name using gets()
    printf("Enter Author Name: ");
    gets(book.author);

    // 4. Input Book Price
    printf("Enter Book Price: ");
    scanf("%f", &book.price);

    // 5. Input Inventory
    printf("Enter Total Copies: ");
    scanf("%d", &book.totalCopies);

    printf("Enter Issued Copies: ");
    scanf("%d", &book.issuedCopies);

    // 6. Sequential Calculation (Just like your student total/percentage)
    book.availableCopies = book.totalCopies - book.issuedCopies;

    // 7. Display Record (Matching your exact marksheet borders and layout)
    printf("\n========================================\n");
    printf("         LIBRARY MANAGEMENT SYSTEM       \n");
    printf("========================================\n");
    printf("Book ID:     %d\n", book.bookId);
    printf("Title:       %s\n", book.bookTitle);
    printf("Author:      %s\n", book.author);
    printf("----------------------------------------\n");
    printf("Total Stock: %d copies\n", book.totalCopies);
    printf("Issued Out:  %d copies\n", book.issuedCopies);
    printf("Available:   %d copies\n", book.availableCopies);
    printf("----------------------------------------\n");
    printf("Price:       %.2f\n", book.price);
    
    // Condition check mapped exactly like your PASSED/FAILED line
    printf("Status:      %s\n", (book.availableCopies > 0) ? "AVAILABLE" : "OUT OF STOCK");
    printf("========================================\n");

    return 0;
}
