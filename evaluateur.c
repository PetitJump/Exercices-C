#include <stdio.h>

char* demander_prenom(){
    static char prenom[50];
    printf("Quel est ton prénom : ");
    scanf("%s", prenom);
    printf("Bonjour %s \n", prenom);
    return prenom;
}

int main(){
    int note;
    char* prenom = demander_prenom();
    printf("%s veuillez donner votre dernière note : ", prenom);
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
