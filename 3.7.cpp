#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 2
    // Variables de entrada
    float longitud, anchura;
    
    //Variables de salida
    float superficie;
    
    // Condiciones
    cout << "Ingrese la longitud de la habitacion: ";
    cin >> longitud;
    
    cout << "Ingrese la anchura de la habitacion:";
    cin >> anchura;
    
    // Proceso
    superficie = longitud * anchura;
    cout << std::fixed << std::setprecision(4);
    
    // salida
    cout << "La superficie es: " << superficie << std::endl;

    return 0;
}