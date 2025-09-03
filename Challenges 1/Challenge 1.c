#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[25], surname[30], sex[6], email[50];
    int age;

    printf("Type in your name: ");
    scanf("%s", name);

    printf("Type in your surname: ");
    scanf("%s", surname);

    printf("Type in your sex: ");
    scanf("%s", sex);

    printf("Type in your age: ");
    scanf("%d", &age);

    printf("Type in your email: ");
    scanf("%s", email);

    system("cls");

    printf("Name    : %s\n", name);
    printf("Surname : %s\n", surname);
    printf("Sex     : %s\n", sex);
    printf("Age     : %d\n", age);
    printf("Email   : %s\n", email);

    return 0;
}
