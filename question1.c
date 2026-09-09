#include <stdio.h>
#include <string.h>

// Define the structure
typedef struct {
    char title[100];
    char author[100];
    int pages;
} book_t;

// Function to print book details
void printBook(book_t book) {
    printf("Book Title: %s, Author: %s, Pages: %d\n",
           book.title, book.author, book.pages);
}

int main() {
    // Create a book_t variable
    book_t book;

    // Assign values
    strcpy(book.title, "C Programming");
    strcpy(book.author, "K&R");
    book.pages = 272;

    // Call the function
    printBook(book);

    return 0;
}
