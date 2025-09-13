#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *left;
    struct Node *right;
};

int main() {
    struct Node *root; struct Node *n1; struct Node *n2; struct Node *n3; struct Node *current; struct Node *stack[10];
    int top;

    root = malloc(sizeof(struct Node));
    (*root).value = 1;
    (*root).left = NULL;
    (*root).right = NULL;

    n1 = malloc(sizeof(struct Node));
    (*n1).value = 2;
    (*n1).left = NULL;
    (*n1).right = NULL;
    (*root).left = n1;

    n2 = malloc(sizeof(struct Node));
    (*n2).value = 3;
    (*n2).left = NULL;
    (*n2).right = NULL;
    (*root).right = n2;

    n3 = malloc(sizeof(struct Node));
    (*n3).value = 4;
    (*n3).left = NULL;
    (*n3).right = NULL;
    (*n1).left = n3;

    top = -1;
    stack[++top] = root;

    while (top >= 0) {
        current = stack[top--];
        printf("%d ", (*current).value);
        if ((*current).right) stack[++top] = (*current).right;
        if ((*current).left) stack[++top] = (*current).left;
    }

    return 0;
}
