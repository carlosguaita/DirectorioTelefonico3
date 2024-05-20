#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    char nombresDireccion[6][2][30];
    int numeros[6];
    ingresarContactos(nombresDireccion,numeros,6);
    imprimirContactos(nombresDireccion,numeros,6);
    return 0;
}