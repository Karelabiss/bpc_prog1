#pragma once
#include <math.h>

// Calculate distance between two points
double vzdalenostBodu(int x1, int y1, int x2, int y2);

// Find index of the closest point to the reference point
int indexNejblizsiBod(int velikost, int (*poleBodu)[2], int referencniX, int referencniY);

// Calculate average distance from reference point to all points
double prumernaVzdalenost(int velikost, int (*poleBodu)[2], int referencniX, int referencniY);