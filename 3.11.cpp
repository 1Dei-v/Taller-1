#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 2
    // Variables de entrada
    float radio;
    
    // Variables de salida
    float longitud, area;
    
    // Condiciones
    cout << "Ingresa el radio del circulo: ";
    cin >> radio;
    
    
    cout << fixed << setprecision(0); // da formato numerico (no notacion cientifica)
    // Proceso
    longitud = 2 * 3.1416 * radio;
    
    area = 3.1416 * radio * radio;
    
    // salida 
    cout << "La longitud del circulo es: " << longitud << endl;
    cout << "El area del circulo es: " << area << endl;
    
    return 0;
    
}