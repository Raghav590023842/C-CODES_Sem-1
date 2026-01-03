// Project Done by Raghav Vij, Priyanshu, Raghav Arjun Kaushik, Kush Garg


#include <stdio.h>

int main() {
    char ch;
    int menu, discount = 0, total = 0, bill = 0,selection;
    int p = 200, s = 150, e = 100;  

    printf("Do you wish to book ticket?: \nEnter y for Yes \nEnter n for No \n:");
    scanf(" %c", &ch);

    while (ch == 'y' || ch == 'Y') {
        printf("\nMenu:\n");
        printf("1. Premium Seat - Rs 200\n");
        printf("2. Standard Seat - Rs 150\n");
        printf("3. Economy Seat - Rs 100\n");
        printf("4. Exit\n");
        printf("Please Enter 1/2/3/4: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("You have Selected Premium Seat\n");
                printf("How Many Seats you want? ");
                scanf("%d", &selection);
                bill += selection * p;
                break;

            case 2:
                printf("You have Selected Standard Seat\n");
                printf("How Many Seats you want? ");
                scanf("%d", &selection);
                bill += selection * s;
                break;

            case 3:
                printf("You have Selected Economy Seat\n");
                printf("How Many Seats you want? ");
                scanf("%d", &selection);
                bill += selection * e;
                break;

            case 4:
                ch = 'n'; 
                break;

            default:
                printf("Invalid option! Please select 1-4.\n");
        }

        
        if (ch != 'n') {
            printf("\nDo you wish to book more tickets? (y/n): ");
            scanf(" %c", &ch);
        }
    }
		
    
    if (bill > 0) {
        printf("\nTotal bill before discount: Rs %d\n", bill);
        if (bill >= 5 * e) {
            discount = bill * 5 / 100;
            bill -= discount;
            printf("Discount applied: Rs %d\n", discount);
        }
        printf("Final bill: Rs %d\n", bill);
    } else {
        printf("No tickets booked.\n");
    }

    return 0;
}
