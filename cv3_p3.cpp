#include <stdio.h>


int main(){
    int x1;
    int x2;
    int y1;
    int y2;

    printf("Zadajte 4 cisla (x1, x2, y1, y2):");
    scanf("%d %d %d %d", &x1, &x2, &y1 , &y2);

    printf("Sucet je [%d;%d]: ", (x1 + x2), (y1 + y2));
}