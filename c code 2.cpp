#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[100];
    float price;
}

int main() {
    struct Book books[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter information for book %d:\n", i+1);
        printf("Title: ");
        fgets(books[i].title, 100, stdin);
        printf("Author: ");
        fgets(books[i].author, 100, stdin);
        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar(); 
    }

    for (i = 0; i < 5; i++) {
	
	printf("Book %d: Title=%s, Author=%s, Price=%.2f\n", i+1, books[i].title, books[i].author, books[i].price);
    }

    retu  rn 0;
}
