#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inicializar la semilla para el generador de números aleatorios
    srand(static_cast<unsigned int>(time(0)));

    // Generar un número aleatorio entre 1 y 100
    int numeroSecreto = rand() % 100 + 1;
    int intentos = 0;
    int adivinanza;

    cout << "Bienvenido al juego de adivinanza de números!\n";
    cout << "He elegido un número entre 1 y 100. ¿Puedes adivinar cuál es?\n";

    // Bucle de juego principal
    do {
        cout << "Introduce tu adivinanza: ";
        cin >> adivinanza;
        intentos++;

        if (adivinanza > numeroSecreto) {
            cout << "Muy alto! Intenta de nuevo.\n";
        } else if (adivinanza < numeroSecreto) {
            cout << "Muy bajo! Intenta de nuevo.\n";
        } else {
            cout << "Felicidades! Has adivinado el número en " << intentos << " intentos.\n";
        }
    } while (adivinanza != numeroSecreto);

    return 0;
}
