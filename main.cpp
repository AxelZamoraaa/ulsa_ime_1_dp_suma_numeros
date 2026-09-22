// ¿Recuerdas qué hace iostream?
#include <iostream>


int main() {

    const int CANTIDAD = 5;

   
    double suma   = 0.0;
    double numero = 0.0;
    int contador = 0;
    
    std::cout << "Bienvenido al programa de suma de numeros.\n";

    std::cout << "Vas a ingresar " << CANTIDAD << " numeros.\n";

    while (contador < CANTIDAD) {
        std::cout << "Ingresa un numero: ";
        std::cin >> numero;

        suma += numero;
        contador++;
    }

    std::cout << "La suma de los numeros ingresados es: " << suma << "\n";

    
    return 0;
}