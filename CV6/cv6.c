#include <stdio.h>
#include <math.h>

int pocet_slov(const char *text){
    int count = 0;
    int in_word = 0;
    while (*text) {
        if (*text == ' ' || *text == '\n' || *text == '\t' || *text == ',' || *text == '.') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        text++;
    }
    return count;
}

int pocet_pismen(const char *text){
    int count = 0;
    while (*text) {
        if ((*text >= 'A' && *text <= 'Z') || (*text >= 'a' && *text <= 'z')) {
            count++;
        }
        text++;
    }
    return count;

}

int pocet_cisel(const char *text){
    int count = 0;
    while (*text) {
        if (*text >= '0' && *text <= '9') {
            count++;
        }
        text++;
    }
    return count;

}

int main(){
    char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";
    printf("Pocet slov: %d\n", pocet_slov(text));
    printf("Pocet pismen: %d\n", pocet_pismen(text));
    printf("Pocet cisel: %d\n", pocet_cisel(text));
    return 0;
}