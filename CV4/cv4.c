#include <stdio.h>

int jePrestupny( int rok ){
    if ( (rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0) ){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int rok;

    printf("Zadejte rok: ");
    scanf("%d", &rok);
    if (jePrestupny(rok)) {
        printf("Rok %d je prestupny.\n", rok);
    } else {
        printf("Rok %d neni prestupny.\n", rok);
    }
    return 0;
}