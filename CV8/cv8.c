#include "stofa.h"
#include <stdio.h>

int main() {
    double zacatek1 = 1.0, konec1 = 5.0;
    double zacatek2 = 3.0, konec2 = 7.0;
    double vysl_zacatek, vysl_konec;

    printf("Zadaj 1 interval (zacatek konec): ");
    scanf("%lf %lf", &zacatek1, &konec1);
    printf("Zadaj 2 interval (zacatek konec): ");
    scanf("%lf %lf", &zacatek2, &konec2);

    if (prunik(zacatek1, konec1, zacatek2, konec2, &vysl_zacatek, &vysl_konec)) {
        printf("Průnik existuje: [%.2f, %.2f]\n", vysl_zacatek, vysl_konec);
    } else {
        printf("Průnik neexistuje.\n");
    }

    return 0;
}