#include <iostream>
#include <string>

using namespace std;

bool esPalindromo(const string& palabra) {
    int n = palabra.size();
    for (int i = 0; i < n / 2; ++i) {
        if (palabra[i] != palabra[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string palabra;
    cout << "Introduce una palabra: ";
    cin >> palabra;

    if (esPalindromo(palabra)) {
        cout << palabra << " es un palíndromo." << endl;
    } else {
        cout << palabra << " no es un palíndromo." << endl;
    }

    return 0;
}

