#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 2
    // Variables de entrada
    float num1, num2;
    
    // Variables de salida
    float suma;
    
    // Condiciones
    cout << "Ingrese el primer numero decimal: ";
    cin >> num1;

    cout << "Ingrese el segundo numero decimal: ";
    cin >> num2;
    
    // Proceso
    suma = num1 + num2;
    
    // salida
    cout << std::fixed << std::setprecision(2);
    
    cout << setw(10) << num1 << endl;
    cout << setw(10) << num2 << endl;
    cout << setw(10) << suma << endl;
    
    return 0;
}