//
// Created by laptop on 20/02/2024.
//

#include "Mezcla.h"
#include <iostream>

using namespace std;

void Mezcla::imprimir(int arreglo[],int size){
    for (int i = 0; i < size; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

void Mezcla::mezcla(int arreglo[], int inicio, int mitad, int fin){
    int i,j,k;
    int tam1 = mitad-inicio +1;
    int tam2 = fin-mitad;

    int L[tam1];
    int R[tam2];

    for(i=0;i<tam1;i++){
        L[i] = arreglo[inicio+i];
    }
    for(j=0;j<tam2;j++){
        R[j] = arreglo[mitad+j+1];
    }
    i=0;
    j=0;
    k=inicio;

    while(i<tam1 && j<tam2){
        if(L[i]<=R[j]){
            arreglo[k] = L[i];
            i++;
        }else{
            arreglo[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<tam1){
        arreglo[k] = L[i];
        i++;
        k++;
    }

    while(j<tam2){
        arreglo[k] = R[j];
        j++;
        k++;
    }
}
void Mezcla::mostrar(int arreglo[],int inicio, int fin){
    if(inicio < fin){
        int mitad = inicio + (fin-inicio) /2;
        mostrar(arreglo,inicio,mitad);
        mostrar(arreglo,mitad+1,fin);
        mezcla(arreglo,inicio,mitad,fin);
    }
}
