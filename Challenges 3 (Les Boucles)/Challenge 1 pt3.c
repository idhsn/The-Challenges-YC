#include <stdio.h>
#include <stdlib.h>

int main() {
    int number,i;

    printf("Enter A number To display the multiplacation table : ");
    scanf("%d",&number);

    for(i = 1 ; i <= 10 ; i++){
        printf(" %d x %d = %d \n",number,i,number*i);
    }


    return 0;
}
