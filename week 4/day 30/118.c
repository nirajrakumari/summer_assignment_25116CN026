// library management system
#include <stdio.h>
#include <string.h>

struct library {
    char bookName[50];
    char authorname[50];
    float price;
    int id;
} s[100];

int main() {
    int i = 1;
    int issue;
    int choice;
    int current_count = 5;

    s[0].id = i;
    strcpy(s[0].bookName, "Gunaho ka devta");
    strcpy(s[0].authorname, "Dharmveer Tiwari");
    s[0].price = 260;
    
    s[1].id = i + 1;
    strcpy(s[1].bookName, "October junction");
    strcpy(s[1].authorname, "Divya Prakash Dubey");
    s[1].price = 150;
    
    s[2].id = i + 2;
    strcpy(s[2].bookName, "White nights");
    strcpy(s[2].authorname, "Fyodor Dostoevsky");
    s[2].price = 300;
    
    s[3].id = i + 3;
    strcpy(s[3].bookName, "A thousand splendid suns");
    strcpy(s[3].authorname, "Khaled Hosseini");
    s[3].price = 500;
    
    s[4].id = i + 4;
    strcpy(s[4].bookName, "Musaafir cafee");
    strcpy(s[4].authorname, "Divya Prakash Dubey");
    s[4].price = 200;

    printf("\n======== WELCOME TO OUR LIBRARY (●'◡'●) ==========\n");
    do {
        printf("\n-------------------------------------------");
        printf("\nenter 0 to get list of books\nenter 1 to issue book\nenter 2 to add a book\nenter 3 to exit\n");
        printf("enter your choice!!\n");
        scanf("%d", &choice);
        getchar(); 
        if (choice == 0) {
            printf("\n--- Available Book List ---\n");
            for (int i = 0; i < current_count; i++) {
                printf("%d. %s\n", s[i].id, s[i].bookName);
            }
        }
        else if (choice == 1) {
            printf("\n--- Book Details Inventory ---\n");
            for (int i = 0; i < current_count; i++) {
                printf("Book Id: %d\n", s[i].id);
                printf("Book Name: ");
                puts(s[i].bookName);
                printf("Author Name: ");
                puts(s[i].authorname);
                printf("Price: %.2f\n\n", s[i].price);
            }
            printf("enter the book id you want to issue: ");
            scanf("%d", &issue);
            if (issue >= 1 && issue <= current_count) {
                printf("Book issued successfully!!\n");
            }
            else {
                printf("invalid id . Book not found!!\n");
            }
        }
        else if (choice == 2) {
            if (current_count >= 100) {
                printf("Library shelves are completely full!\n");
                continue;
            }

            printf("enter the book id you want to add: ");
            scanf("%d", &s[current_count].id);
            getchar(); // Prepares buffer stream cleanly
            
            printf("enter book name\n");
            gets(s[current_count].bookName);
            
            printf("enter the author name\n");
            gets(s[current_count].authorname);
            
            printf("enter book price\n");
            scanf("%f", &s[current_count].price);
            
            current_count++; 
            printf("\nBook added successfully\n\n");
            
            for (int i = 0; i < current_count; i++) {
                printf("Book Id: %d\n", s[i].id);
                printf("Book Name: ");
                puts(s[i].bookName);
                printf("Author Name: ");
                puts(s[i].authorname);
                printf("Price: %.2f\n\n", s[i].price);
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
