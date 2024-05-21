#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    char nombresDireccion[6][2][30]={{"luis","a"},
                                     {"jose","b"},
                                     {"ana","c"},
                                     {"maria","d"},
                                     {"juan","e"},
                                     {"lorena","f"}
                                     };
    char nombreAbuscar[30];
    int numeros[6]={123,234,345,456,567,678};
    int opcion1, opcion2;
    do{
        printf("Seleccione una opcion:\n1. Ingresar Contactos\n2. Imprimir Contactos\n3. Buscar Contactos\n4. Editar Contacto\n>>");
        scanf("%d",&opcion1);
        switch (opcion1)
        {
        case 1:
            ingresarContactos(nombresDireccion,numeros,6);
            break;
        case 2:
            imprimirContactos(nombresDireccion,numeros,6);
            break;
        case 3:
            printf("Ingrese el nombre que desea buscar: ");
            fflush(stdin);
            scanf("%s",&nombreAbuscar);
            int index = buscarContactoXNombre(nombresDireccion,nombreAbuscar,6);
            imprimirContactoXIndice(nombreAbuscar,nombresDireccion,numeros,index);
        default:
            break;
        }
        printf("Desea elegir una nueva opcion: 1.Si / 2.No\n>>");
        scanf("%d",&opcion2);
    }while(opcion2==1);
    return 0;
}