#include <stdio.h>

int main() {
    printf("********\n");
    printf("WELCOME TO MY CAFE\n");
    printf("********\n\n");
    printf("Menu:\n");
    printf("-----\n\n");
    printf("B = Burger (Rs. 200)\n");
    printf("F = French Fries (Rs. 50)\n");
    printf("P = Pizza (Rs. 500)\n");
    printf("S = Sandwiches (Rs. 150)\n");
    char choice;
    int quantity;
    float totalBill = 0;
    printf("\nEnter the number of snacks you want to order (1 to 4): ");
    int numSnacks;
    scanf("%d", &numSnacks);
    if (numSnacks < 1 || numSnacks > 4) {
        printf("Invalid number of snacks selected. Please choose 1, 2, 3, or 4 snacks.\n");
        return 1;
    }
    printf("Enter choice for snack 1 (B, F, P, or S): ");
    scanf(" %c", &choice);
    int price;
    switch (choice) {
        case 'B':
        case 'b':
            price = 200;
            break;
        case 'F':
        case 'f':
            price = 50;
            break;
        case 'P':
        case 'p':
            price = 500;
            break;
        case 'S':
        case 's':
            price = 150;
            break;
        default:
            printf("Invalid choice. Please choose from B, F, P, or S.\n");
            return 1;
    }
    printf("Enter quantity for snack 1: ");
    scanf("%d", &quantity);
    totalBill += price * quantity;
    if (numSnacks > 1) {
        printf("Enter choice for snack 2 (B, F, P, or S): ");
        scanf(" %c", &choice);
        switch (choice) {
            case 'B':
            case 'b':
                price = 200;
                break;
            case 'F':
            case 'f':
                price = 50;
                break;
            case 'P':
            case 'p':
                price = 500;
                break;
            case 'S':
            case 's':
                price = 150;
                break;
            default:
                printf("Invalid choice. Please choose from B, F, P, or S.\n");
                return 1;
        }
        printf("Enter quantity for snack 2: ");
        scanf("%d", &quantity);
        totalBill += price * quantity;
    }
    if (numSnacks > 2) {
        printf("Enter choice for snack 3 (B, F, P, or S): ");
        scanf(" %c", &choice);
        switch (choice) {
            case 'B':
            case 'b':
                price = 200;
                break;
            case 'F':
            case 'f':
                price = 50;
                break;
            case 'P':
            case 'p':
                price = 500;
                break;
            case 'S':
            case 's':
                price = 150;
                break;
            default:
                printf("Invalid choice. Please choose from B, F, P, or S.\n");
                return 1;
        }
        printf("Enter quantity for snack 3: ");
        scanf("%d", &quantity);
        totalBill += price * quantity;
    }
    if (numSnacks > 3) {
        printf("Enter choice for snack 4 (B, F, P, or S): ");
        scanf(" %c", &choice);
        switch (choice) {
            case 'B':
            case 'b':
                price = 200;
                break;
            case 'F':
            case 'f':
                price = 50;
                break;
            case 'P':
            case 'p':
                price = 500;
                break;
            case 'S':
            case 's':
                price = 150;
                break;
            default:
                printf("Invalid choice. Please choose from B, F, P, or S.\n");
                return 1;
        }
        printf("Enter quantity for snack 4: ");
        scanf("%d", &quantity);
        totalBill += price * quantity;
    }
    printf("\nTotal bill: Rs. %.2f\n", totalBill);
    return 0;
}
