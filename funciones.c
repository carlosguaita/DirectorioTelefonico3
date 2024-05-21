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

int buscarContactoXNombre(char nombresDireccion[][2][30],
                          char nombreABuscar[],
                          int n){
    int index=-1;
    for (int i = 0; i < n; i++)
    {
        if(strcmp(nombresDireccion[i][0],nombreABuscar)==0){
            index=i;
            break;
        }
    }
    return index;
}

void imprimirContactoXIndice(char nombreABuscar[],
                             char nombresDireccion[][2][30],
                             int numeros[],
                             int index){
     if(index!=-1){
        printf("Los datos de %s son: \n",nombreABuscar);
        printf("Telefono: %d\n",numeros[index]);
        printf("Direccion: %s\n",nombresDireccion[index][1]);  
    }else{
        printf("No existe el contacto %s en el registro\n",nombreABuscar);
    }
}

void editarContacto(char nombreABuscar[],
                    char nombresDireccion[][2][30],
                    int n){
    strcpy(nombresDireccion[n][0],nombreABuscar);
}