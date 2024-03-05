#ifndef POINT_H
#define POINT_H

typedef struct {
    int x;
    int y;
} Point;

// Funciones para trabajar con la estructura Point
Point ***crearArrayMultDim(int dim1, int dim2, int dim3);
void asignarPunto(Point ***array, int dim1, int dim2, int dim3, int x, int y, int valorX, int valorY);
void liberarArrayMultDim(Point ***array, int dim1, int dim2);

#endif