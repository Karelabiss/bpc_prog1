#include "vectorMath.h"
#include <stdio.h>

int main() {
    struct vector3d vec1, vec2, result;
    enum typOperace operaceTyp;

    printf("Zadejte prvni vektor (x, y, z): ");
    scanf("%lf, %lf, %lf", &vec1.x, &vec1.y, &vec1.z);

    printf("Zadejte druhy vektor (x, y, z): ");
    scanf("%lf, %lf, %lf", &vec2.x, &vec2.y, &vec2.z);

    int volba;
    printf("Zvolte operaci:\n 1 - Sčítání\n 2 - Skalární součin\n 3 - Vektorový součin: ");
    scanf("%d", &volba);

    switch (volba) {
        case 1:
            operaceTyp = soucet;
            break;
        case 2:
            operaceTyp = skalarniSoucin;
            break;
        case 3:
            operaceTyp = vektorovySoucin;
            break;
        default:
            printf("Neplatná volba operace.\n");
            return 1;
    }

    // Perform operation
    result = operace(vec1, vec2, operaceTyp);

    // Print result
    tisk(result, operaceTyp);

    return 0;
}