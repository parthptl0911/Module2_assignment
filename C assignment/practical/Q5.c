// Write a C program to check if a number is even or odd using an if-else 
// statement. Extend the program using a switch statement to display the month 
// name based on the user’s input (1 for January, 2 for February, etc.).



#include <stdio.h>

int main() {
    int number, month;

   
    printf("Enter a Number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is Even.\n", number);
    } else {
        printf("%d is Odd.\n", number);
    }

   
    printf("\nEnter month number (1 to 12): ");
    scanf("%d", &month);

    switch(month) {
        case 1:  printf("%d Month IS:January\n",month); break;
        case 2:  printf("%d Month IS: February\n",month); break;
        case 3:  printf("%d Month IS: March\n",month); break;
        case 4:  printf("%d Month IS: April\n",month); break;
        case 5:  printf("%d Month IS: May\n",month); break;
        case 6:  printf("%d Month IS: June\n",month); break;
        case 7:  printf("%d Month IS: July\n",month); break;
        case 8:  printf("%d Month IS: August\n",month); break;
        case 9:  printf("%d Month IS: September\n",month); break;
        case 10: printf("%d Month IS: October\n",month); break;
        case 11: printf("%d Month IS: November\n",month); break;
        case 12: printf("%d Month IS: December\n",month); break;
        default: printf("Invalid month number.\n");
    }

    return 0;
}
