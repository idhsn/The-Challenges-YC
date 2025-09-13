#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Account {
    char name[50];
    float amount;
};

void addFunds(struct Account *a, float value) {
    a->amount += value;  // simpler pointer syntax
}

int main() {
    struct Account a;

    printf("Enter account name and starting amount: ");
    scanf("%s %f", a.name, &a.amount);

    addFunds(&a, 250);
    printf("%s now has %.2f\n", a.name, a.amount);
    return 0;
}
