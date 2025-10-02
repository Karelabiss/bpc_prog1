#include <stdio.h>


int main(){
    int x1, x2, y1, y2;

    printf("Zadajte 4 cisla (x1, x2, y1, y2):");
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &y1);
    scanf("%d", &y2);


    printf("Sucet je [%d;%d]: ", (x1 + x2), (y1 + y2));
    return 0;
}