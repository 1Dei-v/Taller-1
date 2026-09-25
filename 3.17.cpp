#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 2
    // Variables de entrada
    float A, B; 
    
    // Condiciones
    cout << "Ingresa el primer numero: ";
    cin >> A;
    
    cout << "Ingresa el segundo numero: ";
    cin >> B;
    
    // Proceso
    if (A > B) {
    cout << "El mayor es: " << A << endl;
    } 
    else if (B > A) {
    cout << "El mayor es: " << B << endl;
    } 
    else {
    cout << "Ambos numeros son iguales." << endl;
    }

    return 0;
}