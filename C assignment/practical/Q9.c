// Write a C program that stores 5 integers in a one-dimensional array and prints 
// them. Extend this to handle a two-dimensional array (3x3 matrix) and 
//calculate the sum of all elements.

#include <stdio.h>

int main() {
  
    int a[5];
    printf("Enter 5 integers for 1D array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nYou entered the 1D array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    
    int b[3][3], sum = 0;
    printf("\n\nEnter 9 integers for 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
            sum =sum + b[i][j]; 
        }
    }

    printf("\nThe 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in the matrix: %d\n", sum);

    return 0;
}
