#include <stdio.h>
#include "point.h"
#include <stdlib.h>

int main(void){

    printf("Aplicacion 16 \n");

    //estatico,dinamico dinamico

    Punto ** arrayEstatico[5];

    int i;
    for(i = 0; i< 5; i++){
        arrayEstatico[i] = (Punto**)malloc(sizeof(Punto*)*4);
        int j;
        for(j = 0; j< 4; j++){
            arrayEstatico[i][j] = (Punto*)malloc(sizeof(Punto)*3);
        }
    }

    arrayEstatico[2][3][1].x = 3;
    arrayEstatico[2][3][1].y = 4;

    printf("Punto: valor x = %i , valor y = %i", arrayEstatico[2][3][1].x, arrayEstatico[2][3][1].y);

    for(i = 0; i< 5; i++){
        int j;
        for(j = 0; j< 4; j++){
            free(arrayEstatico[i][j]);
        }
        free(arrayEstatico[i]);
    }

    return 0;

}