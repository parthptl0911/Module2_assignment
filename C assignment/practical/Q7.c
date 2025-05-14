// Write a C program that uses the break statement to stop printing numbers 
// when it reaches 5. Modify the program to skip printing the number 3 using the 
// continue statement.
#include <stdio.h>

int main() {
    int i;

    // For break---------------------------------------------------------------------->
    printf("For break statement(stop at 5):\n");
    for(i = 1; i <= 10; i++) {
        if(i == 5) {
            break;  
        }
        printf("%d\n", i);
    }

    // FOr continue--------------------------------------------------------------->
    printf("\nFOr continue statement(skip 3):\n");
    for(i = 1; i <= 5; i++) {
        if(i == 3) {
            continue; 
        }
        printf("%d\n", i);
    }

    return 0;
}


