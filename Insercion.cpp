//
// Created by laptop on 20/02/2024.
//
#include "Insercion.h"
#include <iostream>
using namespace std;
void Insercion::insercionSort(int arr[], int size) {
    int indice;
    for (int i = 1; i < size; ++i) {
        indice = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > indice) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = indice;
    }
}

void Insercion::imprimir(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
