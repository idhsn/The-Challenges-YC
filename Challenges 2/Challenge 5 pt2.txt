#include <stdio.h>
#include <stdlib.h>

int main() {
    int C, years, months, days, hours, minutes, seconds;

    printf("Enter number of years : ");
    scanf("%d", &years);

    printf("\nChoose a conversion option :\n");
    printf("1. Convert to months\n");
    printf("2. Convert to days\n");
    printf("3. Convert to hours\n");
    printf("4. Convert to minutes\n");
    printf("5. Convert to seconds\n");
    printf("Enter your choice (1-5) : ");
    scanf("%d", &C);

    switch(C) {
        case 1:
            months = years * 12;
            printf("%d years = %d months\n", years, months);
            break;
        case 2:
            days = years * 365;
            printf("%d years = %d days\n", years, days);
            break;
        case 3:
            hours = years * 365 * 24;
            printf("%d years = %d hours\n", years, hours);
            break;
        case 4:
            minutes = years * 365 * 24 * 60;
            printf("%d years = %d minutes\n", years, minutes);
            break;
        case 5:
            seconds = years * 365 * 24 * 60 * 60;
            printf("%d years = %d seconds\n", years, seconds);
            break;
        default:
            printf("Invalid choice. Please select an option between 1 and 5.\n");
    }

    return 0;
}
