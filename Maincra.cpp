// Maincra.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
# include  < stdio.h >


int  main() {
    int aguante, num_filas, diamantes[1000], acumulado = 0;
    int suma1[600];
    scanf(" % d ", &num_filas); // se pide numero de filas

    printf(" Ingrese los diamantes en cada fila ");
    for (int i = 0; i < num_filas; i++) // Para pedir los diamantes en cada fila
    {
        scanf(" % d ", &diamantes[i]);
    }
    printf(" Ingrese el aguante del pico ");
    scanf(" % d ", & aguante); // se pide el aguante del pico

    for(size_t i = 0; i < 600; i++) // para para incializar el arreglo suma en 0
    {
        suma1[i] = 0;
    }
    for(size_t i = 0; i < num_filas; i++) // para el número de elemento del array en suma1
    {
        for (int j = 0; j < aguante; j++) // for para que se recorra el arreglo diamantes
        {
            suma1[i] = suma1[i] + diamantes[j + i]; // #aguante sumas de 0 + valor de diamantes en j + i posición (se registra gracias al + i) que se almacenara en suma1 seleccionada de i
        }

    }
    for(size_t i = 0; i < 600; i++) // para comparar los valores en suma1
    {
        if (suma1[i] > suma1[i + 1] && acumulado < suma1[i + 1]) { // si que registra el arreglo y compara los valores
            acumulado = suma1[i]; // se asigna a acumulado el valor más alto
        }
    }


    printf(" \ n \ n % d \ n \ n ", acumulado); // se imprime el valor más alto
    return  0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
