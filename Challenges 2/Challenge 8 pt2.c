#include <stdio.h>
#include <stdlib.h>

int main(){
    int MG;

    printf("Type in your Grade : ");
    scanf("%d",&MG);

    if (MG >= 16){
        printf("%d Is Excellent",MG);
    }
    else if (MG >= 14){
        printf("%d Is Very Good",MG);
    }
    else if (MG >= 12){
        printf("%d Is Good",MG);
    }
    else if (MG >= 10){
        printf("%d Passes",MG);
    }
    else {
        printf("%d Is Failure",MG);
    }
    return 0;
}
