#include "stofa.h"

int prunik(double zacatek1, double konec1, double zacatek2, double konec2, double* vysl_zacatek, double* vysl_konec) {
    double max_zacatek = (zacatek1 > zacatek2) ? zacatek1 : zacatek2;
    double min_konec = (konec1 < konec2) ? konec1 : konec2;

    if (max_zacatek < min_konec) {
        *vysl_zacatek = max_zacatek;
        *vysl_konec = min_konec;
        return 1; // Průnik existuje
    } else {
        return 0; // Průnik neexistuje
    }
}
