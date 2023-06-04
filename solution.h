#ifndef SOLUTION_H
#define SOLUTION_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void ordenacionBurbuja(int arr[], int n);
void ordenacionSeleccion(int arr[], int n);
void ordenacionInsercion(int arr[], int n);
void ordenacionMezcla(int arr[], int izq, int der);
void ordenacionRapida(int arr[], int bajo, int alto);

void generarArregloAleatorio(int arr[], int n) {
    srand(time(0));
    for(int i = 0; i < n; i++)
        arr[i] = rand() % 1000;
}

void ordenacionBurbuja(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void ordenacionSeleccion(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int idx_min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[idx_min])
                idx_min = j;
        }
        int temp = arr[idx_min];
        arr[idx_min] = arr[i];
        arr[i] = temp;
    }
}

void ordenacionInsercion(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int clave = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > clave) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = clave;
    }
}

void mezcla(int arr[], int izq, int med, int der) {
    int i, j, k;
    int n1 = med - izq + 1;
    int n2 =  der - med;

    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[izq + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[med + 1+ j];

    i = 0;
    j = 0;
    k = izq;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void ordenacionMezcla(int arr[], int izq, int der) {
    if (izq < der) {
        int m = izq+(der-izq)/2;
        ordenacionMezcla(arr, izq, m);
        ordenacionMezcla(arr, m+1, der);
        mezcla(arr, izq, m, der);
    }
}

int particion(int arr[], int bajo, int alto) {
    int pivot = arr[alto];
    int i = (bajo - 1);
 
    for (int j = bajo; j <= alto - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[alto];
    arr[alto] = temp;
    return (i + 1);
}

void ordenacionRapida(int arr[], int bajo, int alto) {
    if (bajo < alto) {
        int pi = particion(arr, bajo, alto);
        ordenacionRapida(arr, bajo, pi - 1);
        ordenacionRapida(arr, pi + 1, alto);
    }
}

#endif
