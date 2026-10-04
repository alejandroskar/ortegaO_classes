#include <iostream>

using namespace std;

class Termometre 
{
private:
    double temperatura;

public:
    Termometre(double tempInicial) 
    {
        modificarTemperatura(tempInicial);
    }

    double consultarTemperatura() 
    {
        return temperatura;
    }

    void modificarTemperatura(double novaTemp) 
    {
        if (novaTemp >= -50 && novaTemp <= 60) 
        {
            temperatura = novaTemp;
        }
        else
        {
            cout << "Error: La temperatura ha d'estar entre -50 °C i 60 °C." << endl;
        }
    }
};