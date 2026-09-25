#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 2
    // Variables de entrada
    float mes;
    
    cout << "Ingrese el numero de mes (1 al 12): ";
    cin >> mes;
    
    // Validacion
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        cout << "El mes " << mes << " tiene 31 dias." << endl;
    } 
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        cout << "El mes " << mes << " tiene 30 dias." << endl;
    } 
    else if (mes == 2) {
        cout << "El mes 2 tiene 28 dias (o 29 en ano bisiesto)." << endl;
    } 
    else {
        cout << "Numero de mes invalido." << endl;
    }

    return 0;
}
    