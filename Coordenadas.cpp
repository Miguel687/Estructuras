// Coordenadas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    int grados;
    float min, seg, grad1, grad2;
    char lat[6], longi[6], d;

    printf("Latitud: ");
    fgets(lat, 6, stdin);

    printf("  grados: ");
    scanf_s("%d", &grados);

    printf("  minutos: ");
    scanf_s("%f", &min);

    printf("  segundos: ");
    scanf_s("%f", &seg);
    while ((d = getc(stdin)) != '\n' && d != EOF);

    grad1 = grados + (min / 60) + (seg / 3600);

    if (lat == "Sur" || lat == "sur") {
        grad1 = -grad1;
    }

    printf("Longitud: ");
    fgets(longi, 6, stdin);

    printf("  grados: ");
    scanf_s("%d", &grados);

    printf("  minutos: ");
    scanf_s("%f", &min);

    printf("  segundos: ");
    scanf_s("%f", &seg);

    grad2 = grados + (min / 60) + (seg / 3600);



    if (strcmp(lat, "Sur") == 0 || strcmp(lat, "sur") == 0) {
        if (strcmp(longi, "Oeste") == 0 || strcmp(longi, "oeste") == 0) {
            printf("https://maps.google.com/maps/place/-%.15f,-%.15f", grad1, grad2);
        }
        else {
            printf("https://maps.google.com/maps/place/-%.15f,%.15f", grad1, grad2);
        }
    }
    else {
        if (strcmp(longi, "Oeste") == 0 || strcmp(longi, "oeste") == 0) {
            printf("https://maps.google.com/maps/place/%.15f,-%.15f", grad1, grad2);
        }
        else {
            printf("https://maps.google.com/maps/place/%.15f,%.15f", grad1, grad2);
        }
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
