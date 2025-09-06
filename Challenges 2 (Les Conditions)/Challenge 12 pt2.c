#include <stdio.h>
#include <stdlib.h>

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    printf("Enter first time (put space between each time) (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Enter second time (put space between each time) (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)) {
        printf("The first moment comes before the second\n");
    }
    else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)) {
        printf("The second moment comes before the first\n");
    }
    else {
        printf("Both are identical\n");
    }

    return 0;
}
