#include <iostream>
#include "Animal.cpp"

using namespace std;

class Murcielago : Animal
{
protected:
    bool vuela, protegido;

public:
    Murcielago(string _orejas, string _cola, string _ojos, int _nro_patas, string _familia, bool _vuela)
        : Animal(_orejas, _cola, _ojos, _nro_patas, _familia)
    {
        vuela = _vuela;
    }

    bool getVuela()
    {
        return vuela;
    }

    void setVuela(bool _vuela)
    {
        vuela = _vuela;
    }
};