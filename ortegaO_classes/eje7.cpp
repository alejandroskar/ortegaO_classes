#include <iostream>
#include <string>

using namespace std;

class Reserva 
{
private:
    string nomClient;
    int nombreNits;
    double preuPerNit;
    bool estatActiva;

public:
    Reserva(string nom, int nits, double preu) 
    {
        nomClient = nom;
        nombreNits = nits;
        preuPerNit = preu;
        estatActiva = true;
    }

    string consultarNomClient() 
    {
        return nomClient;
    }

    void canviarNombreNits(int novesNits) 
    {
        if (estatActiva) {
            if (novesNits > 0) {
                nombreNits = novesNits;
            }
        }
        else {
            cout << "Error: No es pot modificar una reserva cancel·lada." << endl;
        }
    }

    double calcularPreuTotal() 
    {
        return nombreNits * preuPerNit;
    }

    void cancelarReserva() 
    {
        estatActiva = false;
    }

    bool estaActiva() 
    {
        return estatActiva;
    }
};