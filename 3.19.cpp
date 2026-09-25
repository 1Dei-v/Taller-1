#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 2
    // Variables de entrada
    float anyo, A, B, C, D, E, N, dia;
    
    cout << "Ingrese el año: ";
    cin >> anyo;

    A = anyo % 19;
    B = anyo % 4;
    C = anyo % 7;
    D = (19 * A + 24) % 30;
    E = (2 * B + 4 * C + 6 * D + 5) % 7;
    N = 22 + D + E;
    
    // Evaluacion
    if (N <= 31) {
    cout << "El domingo de Pascua es el " << N << " de Marzo del " << anyo << "." << endl;
    } 
    else {
        dia = N - 31;
    cout << "El domingo de Pascua es el " << dia << " de Abril del " << anyo << "." << endl;
    }

    return 0;
}