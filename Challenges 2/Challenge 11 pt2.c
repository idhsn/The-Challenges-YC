#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int day;

    srand(time(NULL));

    while (1) {
        day = rand() % 7 + 1;

        switch (day) {
            case 1:
                printf("DAY 1 IS : Monday\n");
                break;
            case 2:
                printf("DAY 2 IS : Tuesday\n");
                break;
            case 3:
                printf("DAY 3 IS : Wednesday\n");
                break;
            case 4:
                printf("DAY 4 IS : Thursday\n");
                break;
            case 5:
                printf("DAY 5 IS : Friday\n");
                break;
            case 6:
                printf("DAY 6 IS : Saturday\n");
                break;
            case 7:
                printf("DAY 7 IS : Sunday\n");
                break;
            default:
                printf("HOW JUST HOW :) \n");
        }

        printf("Press Enter to continue...\n");
        getchar();
    }

    return 0;
}
