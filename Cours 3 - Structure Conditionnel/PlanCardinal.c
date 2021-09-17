//
// Created by SamuelLeclerc on 2021-09-08.
//
#include "stdio.h"
#include "stdlib.h"

#define NORD 5
#define SUD 6
#define EST 7
#define OUEST 8
#define ORIGINE 9

int main() {

    double x = 0;
    double y = 0;
    int position;

    if (x > 0) {
        if (y > 0) {
            position = 1;
        } else if (y < 0) {
            position = 4;
        } else {
            position = OUEST;
        }
    } else if (x < 0) {
        if (y > 0) {
            position = 1;
        } else if (y < 0) {
            position = 4;
        } else {
            position = EST;
        }
    } else {
        if (y > 0) {
            position = SUD;
        } else if (y < 0) {
            position = NORD;
        } else {
            position = ORIGINE;
        }
    }

    switch (position) {
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Vous etes dans le cadran %d", position);
            break;
        case SUD:
            printf("Sur l'axe des y au Sud");
            break;
        case NORD:
            printf("Sur l'axes des y au Nord");
            break;
        case EST:
            printf("Sur l'axe des y à l'Est");
            break;
        case OUEST:
            printf("Sur l'axes des y au Ouest");
            break;
        case ORIGINE:
            printf("Sur l'origine");
            break;
    }

    return EXIT_SUCCESS;
}