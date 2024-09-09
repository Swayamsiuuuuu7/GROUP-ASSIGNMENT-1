// Ques:Write a menu driven program in C to calculate bill of user in shopping site using switch case till user wants to use.



//Yash: Implements the main loop and menu display.
//Nishant: Handles electronics item addition.
//Parth: Handles groceries item addition.
//Anusarv: Implementing switch case from (Case 1-3)
//Swayam: Handles exit and final bill calculation(Case 4).



#include <stdio.h>

int main() {
    int choice;  // Initialize the choice to start the loop
    float total_bill;
    float price;
    int quantity;

    // Use a loop that continues until the user selects "4" to exit
    while (choice != 4){
        // Display the menu
        printf("\nShopping Menu:\n");
        printf("1. Electronics\n");
        printf("2. Groceries\n");
        printf("3. Clothing\n");
        printf("4. Exit and Calculate Total Bill\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Process the user's choice
        switch (choice) {
            case 1:
                printf("Enter the price of the Electronics item: ");
                scanf("%f", &price);
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                total_bill += price * quantity;
                printf("Electronics item added. Current Total Bill: %f\n", total_bill);
                break;

            case 2:
                printf("Enter the price of the Grocery item: ");
                scanf("%f", &price);
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                total_bill += price * quantity;
                printf("Grocery item added. Current Total Bill: %f\n", total_bill);
                break;

            case 3:
                printf("Enter the price of the Clothing item: ");
                scanf("%f", &price);
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                total_bill += price * quantity;
                printf("Clothing item added. Current Total Bill: %f\n", total_bill);
                break;

            case 4:
                // Exit and show final bill
                printf("Exiting... Your total bill is: %f\n", total_bill);
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");
                break;
        }
    }

    return 0;
}
