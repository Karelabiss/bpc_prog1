#include "Body2d.h"
#include <math.h>

double vzdalenostBodu(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int indexNejblizsiBod(int velikost, int (*poleBodu)[2], int referencniX, int referencniY) {
    int indexNejblizsiho = -1;
    double nejmensiVzdalenost = -1.0;
    
    for(int i = 0; i < velikost; i++) {
        double vzdalenost = vzdalenostBodu(referencniX, referencniY, poleBodu[i][0], poleBodu[i][1]);
        if(nejmensiVzdalenost < 0 || vzdalenost < nejmensiVzdalenost) {
            nejmensiVzdalenost = vzdalenost;
            indexNejblizsiho = i;
        }
    }
    return indexNejblizsiho;
}

double prumernaVzdalenost(int velikost, int (*poleBodu)[2], int referencniX, int referencniY) {
    double soucetVzdalenosti = 0.0;
    for(int i = 0; i < velikost; i++) {
        soucetVzdalenosti += vzdalenostBodu(referencniX, referencniY, poleBodu[i][0], poleBodu[i][1]);
    }
    return soucetVzdalenosti / velikost;
}