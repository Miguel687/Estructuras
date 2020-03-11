// Sumas de dados.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

    int suma = 0;
    int sums[13] = { 0 };

    srand((unsigned)time(0));

    for (int j = 1; j <= 36000; j++) {
        suma = 0;
        for (int i = 0; i < 2; i++) {
            suma += ((rand() % 6) + 1);
        }
        sums[suma]++;
    }

    printf("%7s%13s\n", "Suma", "# Veces");

    for (int i = 2; i <= 12; i++) {
        printf("%7u%13d\n", i, sums[i]);
    }

    return 0;
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
