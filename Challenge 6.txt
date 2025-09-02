#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int C;
    float n1, n2, Result;

    while (1) {
        system("cls");

        gotoxy(30, 5);  printf("Choose one of the options:");
        gotoxy(30, 7);  printf("1. Addition");
        gotoxy(30, 8);  printf("2. Subtraction");
        gotoxy(30, 9);  printf("3. Multiplication");
        gotoxy(30, 10); printf("4. Division");
        gotoxy(30, 11); printf("5. Exit");
        gotoxy(30, 13); printf("Enter your choice: ");
        scanf("%d", &C);

        if (C == 5) {
            system("cls");
            gotoxy(30, 10);
            printf("Exiting the calculator.\n");
            break;
        }

        system("cls");

        gotoxy(30, 8);  printf("Enter the first number: ");
        scanf("%f", &n1);
        gotoxy(30, 9);  printf("Enter the second number: ");
        scanf("%f", &n2);

        system("cls");

        switch (C) {
            case 1:
                Result = n1 + n2;
                gotoxy(30, 10); printf("%.2f + %.2f = %.2f\n", n1, n2, Result);
                break;
            case 2:
                Result = n1 - n2;
                gotoxy(30, 10); printf("%.2f - %.2f = %.2f\n", n1, n2, Result);
                break;
            case 3:
                Result = n1 * n2;
                gotoxy(30, 10); printf("%.2f * %.2f = %.2f\n", n1, n2, Result);
                break;
            case 4:
                gotoxy(30, 10);
                if (n2 != 0) {
                    Result = n1 / n2;
                    printf("%.2f / %.2f = %.2f\n", n1, n2, Result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                gotoxy(30, 10); printf("Invalid choice.");
        }

        getchar();
        gotoxy(30, 12);
        printf("Press Enter to continue...");
        getchar();
    }

    return 0;
}
