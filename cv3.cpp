#include <stdio.h>


int main(){
    int *rychlostZvuk;
    int *cas;

    *rychlostZvuk = 340;

    printf("Zadajte cas za ktery je pocut hrom: (s)");
    scanf("%d", cas);

    printf("Vydalenost je %d metrov", (*cas)*(*rychlostZvuk));
    return 0;
}