#include <stdio.h>
#include "caracteres.h"

int main() {
    char caracter;
    
    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter);
    
    printf("El caracter ingresado es:\n");
    printf("Mayuscula: %s\n", isUpperCase(caracter) ? "Si" : "No");
    printf("Minuscula: %s\n", isLowerCase(caracter) ? "Si" : "No");
    printf("Letra: %s\n", isLetter(caracter) ? "Si" : "No");
    printf("Número: %s\n", isNumber(caracter) ? "Si" : "No");
    printf("Otro caracter: %s\n", isOtherCharacter(caracter) ? "Si" : "No");
    printf("Enter: %s\n", isEnter(caracter) ? "Si" : "No");
    
    if (isUpperCase(caracter)) {
        printf("El caracter en mayuscula es: %c\n", caracter);
    } else {
        char upper = toUpperCase(caracter);
        if (upper != -1) {
            printf("El caracter en mayuscula es: %c\n", upper);
        } else {
            printf("No es posible convertir a mayuscula.\n");
        }
    }
    
    if (isLowerCase(caracter)) {
        printf("El caracter en minuscula es: %c\n", caracter);
    } else {
        int lower = toLowerCase(caracter);
        if (lower != -1) {
            printf("El caracter en minuscula es: %c\n", lower);
        } else {
            printf("No es posible convertir a minuscula.\n");
        }
    }
    
    return 0;
}
