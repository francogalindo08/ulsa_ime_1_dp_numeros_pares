// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Por qué este include usa comillas y no < >?
#include "utilerias.h"

// ¿por qué debe existir la función main()?
int main() {
    // 1. Constante: cantidad de números a leer
    const int CANTIDAD = 5;
    int pares[CANTIDAD];
    int totalPares = 0;
    int numero = 0;

    std::cout << "Guardar los numeros pares de " << CANTIDAD << " numeros\n";

    // 3. Ciclo: leer CANTIDAD números
    for (int i = 0; i < CANTIDAD; i++) {
        numero = leerEntero("Escribe un numero: ");

        if (numero % 2 == 0) {
            pares[totalPares] = numero;
            totalPares++;
        }
    }

    // 4. Salida
    std::cout << "Se guardaron " << totalPares << " numeros pares\n";
    std::cout << "Los pares son: ";

    for (int i = 0; i < totalPares; i++) {
        std::cout << pares[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}