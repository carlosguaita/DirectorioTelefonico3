#include <stdio.h>
#include "funciones.h"
#include <string.h>

void ingresarContactos(char nombresDireccion[][2][30], 
                       int numeros[], 
                       int n){
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el nombre del contacto %d: ",i);
        scanf("%s",&nombresDireccion[i][0]);
        printf("Ingrese la direccion del contacto %d: ",i);
        scanf("%s",&nombresDireccion[i][1]);
        printf("Ingrese el numero del contacto %d: ",i);
        scanf("%d",&numeros[i]);

    }
}

void imprimirContactos(char nombresDireccion[][2][30], 
                       int numeros[], 
                       int n){
    printf("Nombre\t\tNumero\t\tDireccion\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t\t%d\t\t%s\n",nombresDireccion[i][0],numeros[i],nombresDireccion[i][1]);
    }
}