#include <iostream>

using namespace std;

class Rectangle 
{
private:
    double amplada;
    double alcada;

public:
    Rectangle(double amp, double al) 
    {
        amplada = amp;
        alcada = al;
    }

    double calcularArea() 
    {
        return amplada * alcada;
    }

    double calcularPerimetre() 
    {
        return 2 * (amplada + alcada);
    }
   
    void mostrarDimensions() {
        cout << "Amplada: " << amplada << ", Alçada: " << alcada << endl;
    }
};