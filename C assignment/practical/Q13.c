//  Write a C program to create a file, write a string into it, close the file, then 
//open the file again to read and display its contents. 

#include <stdio.h>

int main() {
    FILE *fp;
    char str[200];
    char ch;

    printf("Enter a string to write into the file:\n");
    fgets(str, sizeof(str), stdin); 

    fp = fopen("file.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fputs(str, fp);

    fclose(fp);

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nFile content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}

