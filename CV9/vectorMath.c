#include "vectorMath.h"
#include <stdio.h>
#include <math.h>

struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ) {
    struct vector3d result = {0, 0, 0};
    switch (typ) {
        case soucet:
            result.x = u.x + v.x;
            result.y = u.y + v.y;
            result.z = u.z + v.z;
            break;
        case skalarniSoucin:
            result.x = u.x * v.x + u.y * v.y + u.z * v.z;
            break;
        case vektorovySoucin:
            result.x = u.y * v.z - u.z * v.y;
            result.y = u.z * v.x - u.x * v.z;
            result.z = u.x * v.y - u.y * v.x;
            break;
        default:
            break;
    }
    return result;
}

void tisk(struct vector3d u, enum typOperace typ) {
    if (typ == skalarniSoucin) {
        printf("Skalární součin = %.2f\n", u.x);
        return;
    }
    else if (typ == soucet) {
        printf("w = (%.2f, %.2f, %.2f)\n", u.x, u.y, u.z);
        printf("||w|| = %.2f\n", sqrt(u.x * u.x + u.y * u.y + u.z * u.z));
        return;
    }
    else if (typ == vektorovySoucin) {
        printf("w = (%.2f, %.2f, %.2f)\n", u.x, u.y, u.z);
        return;
    }
}