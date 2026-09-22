#include <iostream>

using namespace std;

int main() {

    const int CANTIDAD = 5;

   
    double suma   = 0.0;
    double numero = 0.0;
    int contador = 0;
    
    cout << "Bienvenido al programa de suma de numeros.\n";

    cout << "Vas a ingresar " << CANTIDAD << " numeros.\n";

    while (contador < CANTIDAD) {
        cout << "Ingresa un numero: ";
        cin >> numero;

        suma += numero;
        contador++;
    }

    cout << "La suma de los numeros ingresados es: " << suma << "\n";

    
    return 0;
}