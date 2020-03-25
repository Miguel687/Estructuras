// Voltear con punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string.h>


char* voltea_cadena(char arr[]) {

    int largo_cadena = strlen(arr) - 1;
    char temp, * inicio = arr, * fin = arr;

    for (int j = 0; j < largo_cadena; j++) {
        *fin++;
    }

    for (int i = 0; i <= (largo_cadena / 2); i++) {
        temp = *fin;
        *fin = *inicio;
        *inicio = temp;

        inicio++;
        fin--;

    }

    return arr;
}


int main()
{

    char str[100] = "Buenos dias profesor", * new_str;
    
   
    new_str = voltea_cadena(str);



    printf("La cadena volteada: %s\n", new_str);

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
