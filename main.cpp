#include <iostream>
#include "Insercion.h"
#include "Mezcla.h"
using namespace std;
int main() {
    Insercion insercion;
    int arreglo[12] = {12, 53, 54, 86, 93, 88l, 22, 32, 76, 66, 33, 58};
    int size = sizeof(arreglo)/sizeof(arreglo[0]);
    insercion.imprimir(arreglo, size);
    insercion.insercionSort(arreglo,size);
    cout << "Realizando la insercion: ";
    insercion.imprimir(arreglo, size);

    Mezcla mezcla;
    int arreglo2[]={23,34,6,77,43,58,99,114};
    int size2 = sizeof (arreglo2)/sizeof(arreglo2[0]);

    mezcla.imprimir(arreglo2,size2);
    mezcla.mostrar(arreglo2, 0, size2);
    cout << "Realizando el ordenamiento";
    mezcla.imprimir(arreglo2, size2);


}
