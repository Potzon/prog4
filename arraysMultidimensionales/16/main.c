#include <stdio.h>
#include "point.h"

int main(){
    int dim1 = 5, dim2 = 4, dim3 = 3;
    Point ***array = crearArrayMultDim(dim1,dim2,dim3);

    asignarPunto(array, dim1, dim2, dim3, 2, 3, 3, 4);

    liberarArrayMultDim(array, dim1, dim2);

    return 0;

}