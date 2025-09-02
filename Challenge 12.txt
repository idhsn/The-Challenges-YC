#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, n1, n2, n3, n4, reversed;

    printf("Enter a 4-digit number: ");
    scanf("%d", &n);

    n1 = n / 1000;
    n2 = (n / 100) % 10;
    n3 = (n / 10) % 10;
    n4 = n % 10;

    reversed = n4 * 1000 + n3 * 100 + n2 * 10 + n1;

    printf("Reversed number: %d\n", reversed);
    return 0;
}
