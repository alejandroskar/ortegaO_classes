#include <iostream>
#include <string>

using namespace std;

class Jugador {
private:
    string nom;
    int punts;
    int vides;

public:
    Jugador(string nomJugador) {
        nom = nomJugador;
        punts = 0;
        vides = 10;
    }

    void afegirPunts(int p) {
        if (p > 0) {
            punts += p;
        }
    }

    void perdreVida() {
        if (vides > 0) {
            vides--;
        }
    }

    int consultarPunts() {
        return punts;
    }

    int consultarVides() {
        return vides;
    }

    bool estaViu() {
        return vides > 0;
    }
};