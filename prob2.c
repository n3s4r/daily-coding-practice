#include <stdio.h>

int main() {
    // 2D Array declaration: 100 items, 2 columns (0: Cost, 1: Quantity)
    // We maintain 'double' for both to keep them in the same array, 
    // though quantity is logically an integer.
    double salesData[100][2] = {
        {10.00, 5},
        {15.99, 6},
        {20.22, 8},
        {13.78, 10},
        {8.99, 2},
        {6.20, 15},
        {4.30, 3},
        {10.00, 16},
        {12.00, 10}
        // The rest of the 100 items are initialized to 0 by default
    };

    // We only have 9 actual items entered from the image
    int itemCount = 9; 
    
    int choice;
    double total = 0.0;
    int count = 0;

    // Display the menu to the user
    printf("Please select the data you want to see (1-4):\n");
    printf("1. Total number of items sold\n");
    printf("2. Total cost of all items sold\n");
    printf("3. Quantity of items that sold less than 10\n");
    printf("4. Quantity of items that sold more than or equal to 10\n");
    printf("Enter your choice: ");
    
    scanf("%d", &choice);
    printf("\n"); // Newline for formatting

    // Process the user's choice
    switch(choice) {
        case 1:
            // Calculate total quantity of all items
            for(int i = 0; i < itemCount; i++) {
                total += salesData[i][1];
            }
            printf("The total number of items sold is: %.0f\n", total);
            break;

        case 2:
            // Calculate total revenue (Cost * Quantity for each item)
            for(int i = 0; i < itemCount; i++) {
                total += (salesData[i][0] * salesData[i][1]);
            }
            printf("The total cost of all items sold is: $%.2f\n", total);
            break;

        case 3:
            // Count how many item types sold less than 10 units
            for(int i = 0; i < itemCount; i++) {
                if(salesData[i][1] < 10) {
                    count++;
                }
            }
            printf("The number of item types that sold less than 10 is: %d\n", count);
            break;

        case 4:
            // Count how many item types sold 10 or more units
            for(int i = 0; i < itemCount; i++) {
                if(salesData[i][1] >= 10) {
                    count++;
                }
            }
            printf("The number of item types that sold 10 or more is: %d\n", count);
            break;

        default:
            printf("Invalid selection. Please run the program again and choose 1-4.\n");
            break;
    }

    return 0;
}
