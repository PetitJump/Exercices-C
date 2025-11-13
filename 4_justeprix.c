#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int nombre = (rand() % 100) + 1;
    int devine;
    printf("Donne un premier chiffre : ");
    scanf("%d", &devine);

    while(nombre != devine){
        if(nombre > devine){
            printf("Trop petit \n");
        }
        else {
            printf("Trop grand\n");
        }
        printf("Choisir un nouveau chiffre : ");
        scanf("%d", &devine);
    }
    printf("Bravo vous avez trouver !");
    return 0;
}
