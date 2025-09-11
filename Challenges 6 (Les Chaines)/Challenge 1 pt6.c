#include <stdio.h>
#include <stdlib.h>

int main() {
    char channel[100];

    printf("Veuillez saisir une chaîne de caractères : ");

    fgets(channel, sizeof(channel), stdin);

    printf("Vous avez saisi : %s", channel);

    return 0;
}
