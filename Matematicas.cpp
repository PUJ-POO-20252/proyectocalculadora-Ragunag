//
// Created by RAGUS on 19/08/2025.
//

#include "Matematicas.h"

// Implementación de sumar
int sumar(int a, int b) {
    return a + b;
}

// Implementación de restar
int restar(int a, int b) {
    return a - b;
}

// Implementación de multiplicar
int multiplicar(int a, int b) {
    return a * b;
}

// Implementación de dividir
float dividir(int a, int b) {
    if (b == 0) {
        return 0; // Manejo simple de división por cero
    }
    return static_cast<float>(a) / b; // Conversión a float para división precisa
}