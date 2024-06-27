#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // Para std::sort

using namespace std;

int main() {
    // Declaración de un vector de strings para almacenar las entradas del usuario
    vector<string> hojas;
    string temp;

    // Pedir al usuario que ingrese los tipos de hoja blanca
    cout << "Por favor, introduce los tipos de hoja blanca separados por espacios (escribe 'q' para terminar): ";

    while (true) {
        cin >> temp;
        if (temp == "q") break;  // Terminar la entrada si el usuario escribe 'q'
        hojas.push_back(temp);     // Añadir cada entrada al vector
    }

    // Ordenar el vector
    sort(hojas.begin(), hojas.end());

    // Imprimir las cadenas de caracteres ingresadas por el usuario en orden
    cout << "Los tamaños de hoja ingresados y ordenados son: ";
    for (size_t i = 0; i < hojas.size(); ++i) {
        cout << hojas[i] << " ";
    }
    cout << endl;

    return 0;  // Termina el programa
}

