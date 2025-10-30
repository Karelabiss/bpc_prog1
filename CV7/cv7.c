#include "Body2d.h"
#include <stdio.h>

#define POCET_BODU 10

int main() {
    int body[POCET_BODU][2] = {
        {5, 10},
        {-14, 2},
        {45, 4},
        {-9, 8},
        {58, -3},
        {47, 5},
        {-18, -86},
        {75, 7},
        {-25, 51},
        {17, 98}
    };

    int referencniX = 0;
    int referencniY = 0;
    
    int indexNejblizsiho = indexNejblizsiBod(POCET_BODU, body, referencniX, referencniY);
    if (indexNejblizsiho != -1) {
        printf("Nejblizsi bod k [%d,%d] je bod[%d] = [%d,%d]\n", 
            referencniX, referencniY, 
            indexNejblizsiho, 
            body[indexNejblizsiho][0], body[indexNejblizsiho][1]);
    }

    double prumerVzdalenosti = prumernaVzdalenost(POCET_BODU, body, referencniX, referencniY);
    printf("Prumerna vzdalenost bodu od [%d,%d] je %.2f\n", 
        referencniX, referencniY, prumerVzdalenosti);

    return 0;
}   