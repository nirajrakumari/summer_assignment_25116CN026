#include <stdio.h>
#include <string.h>

// Structure declaration
struct Inventory {
    int itemId;
    char itemName[50];
    float unitPrice;
    int quantity;
    float totalValue;
};

int main() {
    struct Inventory item;

    // 1. Input Item ID
    printf("Enter Item ID: ");
    scanf("%d", &item.itemId);
    
    // Clear the leftover newline character from the buffer before gets()
    getchar(); 

    // 2. Input Item Name using gets()
    printf("Enter Item Name: ");
    gets(item.itemName);

    // 3. Input Pricing and Stock Quantity
    printf("Enter Unit Price: ");
    scanf("%f", &item.unitPrice);

    printf("Enter Stock Quantity: ");
    scanf("%d", &item.quantity);

    // 4. Sequential Calculation
    item.totalValue = item.unitPrice * item.quantity;

    // 5. Display Inventory Record (Your Exact Style)
    printf("\n========================================\n");
    printf("          INVENTORY MANAGEMENT          \n");
    printf("========================================\n");
    printf("Item ID:     %d\n", item.itemId);
    printf("Name:        %s\n", item.itemName);
    printf("Unit Price:  %.2f\n", item.unitPrice);
    printf("----------------------------------------\n");
    printf("Total Stock: %d units\n", item.quantity);
    printf("----------------------------------------\n");
    printf("Total Value: %.2f\n", item.totalValue);
    
    // Condition check mapped exactly like your PASSED/FAILED line
    printf("Stock Alert: %s\n", (item.quantity <= 5) ? "REORDER IMMEDIATELY" : "STOCK OK");
    printf("========================================\n");

    return 0;
}
