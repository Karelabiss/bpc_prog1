#include <stdio.h>
#include "math.h"

struct Vector
{
    double a[3];
    double b[3];
    double c[3];
};


void soucet(double a[3], double b[3], double c[3]){
    c[0] = a[0] + b[0];
    c[1] = a[1] + b[1];
    c[2] = a[2] + b[2];
}

double velikost(double a[3]){
    return sqrt((a[0]*a[0]) + (a[1] * a[1]) + (a[2] * a[2]));
}

double skalarniSoucin(double a[3], double b[3]){
    return (a[0]*b[0] + a[1]*b[1]);
}

void VectorovySoucin(double a[3], double b[3], double c[3]){
    c[0] = a[1] * b[2] - a[2] * b[1];
    c[1] = a[2] * b[0] - a[0] * b[2];
    c[2] = a[0] * b[1] - a[1] * b[0];
}

int main(){
    struct Vector vector;

    printf("Zadajte TRI cisla oddelene medzerou (x y z) pre Vector A: ");
    scanf("%lf %lf %lf", &vector.a[0], &vector.a[1], &vector.a[2]);
    printf("Zadajte TRI cisla oddelene medzerou (x y z) pre Vector B: ");
    scanf("%lf %lf %lf", &vector.b[0], &vector.b[1], &vector.b[2]);

    soucet(vector.a, vector.b, vector.c);

    printf("Soucet Vectorov A a B je: [%lf, %lf, %lf]\n", vector.c[0], vector.c[1], vector.c[2]);

    printf("Velkost Vectoru A je: %lf \n", velikost(vector.a));
    printf("Velkost Vectoru B je: %lf \n", velikost(vector.a));

    printf("Skalarni soucin vectorov A a B je: %lf\n", skalarniSoucin(vector.a, vector.b));
    printf("Skalarni soucin vectorov A a B je: %lf\n", skalarniSoucin(vector.a, vector.b));
}