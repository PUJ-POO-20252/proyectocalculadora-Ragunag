#include <iostream>
#include "Matematicas.h"  // Incluir el archivo de cabecera con las funciones

int main()
{
    int a, b;

    // Pedir al usuario que ingrese los números
    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;

    // Llamar a las funciones y mostrar resultados
    std::cout << "Suma: " << sumar(a, b) << std::endl;
    std::cout << "Resta: " << restar(a, b) << std::endl;
    std::cout << "Multiplicacion: " << multiplicar(a, b) << std::endl;
    std::cout << "Division: " << dividir(a, b) << std::endl;

    return 0;
}