#include <iostream>
#include "matematicas.h"
#include "matriz_utils.h"

int main() {
    int a, b;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;

    std::cout << "Suma: " << sumar(a, b) << std::endl;
    std::cout << "Resta: " << restar(a, b) << std::endl;
    std::cout << "Multiplicacion: " << multiplicar(a, b) << std::endl;
    std::cout << "Division: " << dividir(a, b) << std::endl;

    int matrizA[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrizB[2][3] = {{10, 20, 30}, {40, 50, 60}};
    int resultado[2][3];

    sumarMatrices(matrizA, matrizB, resultado);

    imprimirMatriz("Matriz A:", matrizA);
    imprimirMatriz("Matriz B:", matrizB);
    imprimirMatriz("Resultado:", resultado);

    return 0;
}