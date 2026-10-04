#include <iostream>
#include <string>

using namespace std;

class Producte 
{
private:
    string nom;
    double preu;
    int estoc;

public:
    Producte(string n, double p, int e) {
        nom = n;
        preu = p;
        estoc = e;
    }

    double consultarPreu() 
    {
        return preu;
    }

    void canviarPreu(double nouPreu) 
    {
        if (nouPreu >= 0) {
            preu = nouPreu;
        }
    }

    void afegirEstoc(int quantitat) 
    {
        if (quantitat > 0) 
        {
            estoc += quantitat;
        }
    }

    bool vendreUnitat() 
    {
        if (estoc > 0) 
        {
            estoc--;
            return true;
        }
        return false;
    }
};