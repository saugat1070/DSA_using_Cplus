#include <stdio.h>
#include <stdlib.h>

// Define the structure for a book
struct Book {
    char Name[100];
    float Price;
    char Author[100];
};

int main() {
    struct Book book;
    FILE *file;

    // Read book information from the user
    printf("Enter the book name: ");
    scanf(" %[^\n]", book.Name); // Read until newline
    printf("Enter the book price: ");
    scanf("%f", &book.Price);
    printf("Enter the book author: ");
    scanf(" %[^\n]", book.Author); // Read until newline

    // Save the book information to "book.txt"
    file = fopen("book.txt", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&book, sizeof(struct Book), 1, file);
    fclose(file);

    // Read the book information back from "book.txt"
    file = fopen("book.txt", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fread(&book, sizeof(struct Book), 1, file);
    fclose(file);

    // Display the book information
    printf("\nBook Information:\n");
    printf("Name: %s\n", book.Name);
    printf("Price: %.2f\n", book.Price);
    printf("Author: %s\n", book.Author);

    return 0;
}
