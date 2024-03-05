#include "point.h"
#include <stdlib.h>

Point ***crearArrayMultDim(int dim1, int dim2, int dim3) {
    Point ***array = (Point ***)malloc(dim1 * sizeof(Point **));
    if (array == NULL) {
        return NULL; // Devuelve NULL si no se puede asignar memoria
    }
    for (int i = 0; i < dim1; i++) {
        array[i] = (Point **)malloc(dim2 * sizeof(Point *));
        if (array[i] == NULL) {
            // Liberar la memoria asignada previamente
            for (int j = 0; j < i; j++) {
                free(array[j]);
            }
            free(array);
            return NULL;
        }
        for (int j = 0; j < dim2; j++) {
            array[i][j] = (Point *)malloc(dim3 * sizeof(Point));
            if (array[i][j] == NULL) {
                // Liberar la memoria asignada previamente
                for (int k = 0; k < j; k++) {
                    free(array[i][k]);
                }
                free(array[i]);
                for (int k = 0; k < i; k++) {
                    free(array[k]);
                }
                free(array);
                return NULL;
            }
        }
    }
    return array;
}

void asignarPunto(Point ***array, int dim1, int dim2, int dim3, int x, int y, int valorX, int valorY) {
    array[x][y]->x = valorX;
    array[x][y]->y = valorY;
}

void liberarArrayMultDim(Point ***array, int dim1, int dim2) {
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            free(array[i][j]);
        }
        free(array[i]);
    }
    free(array);
}
