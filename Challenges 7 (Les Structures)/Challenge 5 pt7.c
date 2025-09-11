#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct  Books {
    int year;
    char Author[100], Title[100];
};

int main() {
    struct Books book;

    printf("Enter The Title : ");
    fgets(book.Title, sizeof(book.Title), stdin);
    book.Title[strcspn(book.Title, "\n")] = '\0';

    printf("Enter Author : ");
    fgets(book.Author, sizeof(book.Author), stdin);
    book.Author[strcspn(book.Author, "\n")] = '\0';

    printf("Enter year : ");
    scanf("%d", &book.year);

    printf("\"%s\" was written by %s - %d\n", book.Title, book.Author, book.year);

    return 0;
}
