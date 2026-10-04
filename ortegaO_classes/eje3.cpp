#include <iostream>

using namespace std;

class Llum 
{
private:
    bool encesa;

public:
    Llum() {
        encesa = false;
    }

    void encendre() {
        encesa = true;
    }

    void apagar() {
        encesa = false;
    }

    bool estaEncesa() {
        return encesa;
    }
};