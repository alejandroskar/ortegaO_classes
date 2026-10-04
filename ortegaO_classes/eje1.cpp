#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nom;
    int edat;

public:
 
    Persona(string n, int e) 
    {
        nom = n;
        edat = e;
    }

    void mostrarDades() 
    {
        cout << "Nom: " << nom << ", Edat: " << edat << " anys." << endl;
    }

    
    bool esMajorEdat()     
    {
        return edat >= 18;
    }
};