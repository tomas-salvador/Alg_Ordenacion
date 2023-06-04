#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "solution.h"

#define TAMANIO 100000

int main() {
    int arr[TAMANIO];

    clock_t inicio, fin;
    double tiempo_cpu_usado;
    
    generarArregloAleatorio(arr, TAMANIO);

    inicio = clock();
    ordenacionBurbuja(arr, TAMANIO);
    fin = clock();
    tiempo_cpu_usado = ((double) (fin - inicio)) / CLOCKS_PER_SEC;
    printf("Tiempo de ordenacion por burbuja = %.6f\n", tiempo_cpu_usado);

    generarArregloAleatorio(arr, TAMANIO);

    inicio = clock();
    ordenacionSeleccion(arr, TAMANIO);
    fin = clock();
    tiempo_cpu_usado = ((double) (fin - inicio)) / CLOCKS_PER_SEC;
    printf("Tiempo de ordenacion por seleccion = %.6f\n", tiempo_cpu_usado);

    generarArregloAleatorio(arr, TAMANIO);

    inicio = clock();
    ordenacionInsercion(arr, TAMANIO);
    fin = clock();
    tiempo_cpu_usado = ((double) (fin - inicio)) / CLOCKS_PER_SEC;
    printf("Tiempo de ordenacion por insercion = %.6f\n", tiempo_cpu_usado);

    generarArregloAleatorio(arr, TAMANIO);

    inicio = clock();
    ordenacionMezcla(arr, 0, TAMANIO - 1);
    fin = clock();
    tiempo_cpu_usado = ((double) (fin - inicio)) / CLOCKS_PER_SEC;
    printf("Tiempo de ordenacion por mezcla = %.6f\n", tiempo_cpu_usado);

    generarArregloAleatorio(arr, TAMANIO);

    inicio = clock();
    ordenacionRapida(arr, 0, TAMANIO - 1);
    fin = clock();
    tiempo_cpu_usado = ((double) (fin - inicio)) / CLOCKS_PER_SEC;
    printf("Tiempo de ordenacion rapida = %.6f\n", tiempo_cpu_usado);

    return 0;
}
