#include <stdio.h>

void demander_prenom(){
    char prenom[50];
    printf("Quel est ton prénom : ");
    scanf("%s", &prenom);
    printf("Bonjour %s \n", prenom);
}

int main(){
    int note;
    demander_prenom();
    printf("Veuillez donner votre note : ");
    scanf("%d", &note);
    if (note <= 9) {
        printf("Note insuffisant \n");
    }
    else if (note <= 13) {
        printf("Bof \n");
    }
    else if (note <= 16) {
        printf("Bien \n");
    }
    else if (note <= 20) {
        printf("Parfait \n");
    }
    else {
        printf("Erreur \n");
    }
    return 0;
}

