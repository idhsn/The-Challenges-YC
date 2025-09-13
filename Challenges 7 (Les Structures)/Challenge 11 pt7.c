#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    float grade;
    struct Student *next;
};

int main() {
    struct Student *student1; struct Student *student2; struct Student *current;

    student1 = malloc(sizeof(struct Student));
    strcpy((*student1).name, "Alice");
    (*student1).grade = 15.5;
    (*student1).next = NULL;

    student2 = malloc(sizeof(struct Student));
    strcpy((*student2).name, "Bob");
    (*student2).grade = 12.0;
    (*student2).next = student1;

    current = student2;
    while (current) {
        printf("%s %.2f\n", (*current).name, (*current).grade);
        current = (*current).next;
    }

    return 0;
}
