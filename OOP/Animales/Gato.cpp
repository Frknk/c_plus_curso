#include <string>
#include "Animal.cpp"

using namespace std;

class Gato : Animal
{
protected:
    int vidas;
    bool maulla, domesticado;

public:
    Gato(string _orejas, string _cola, string _ojos, int _nro_patas, string _familia, int _vidas)
        : Animal(_orejas, _cola, _ojos, _nro_patas, _familia)
    {
        vidas = _vidas;
    }

    int getVidas()
    {
        return vidas;
    }

    void setVidas(int _vidas)
    {
        vidas = _vidas;
    }
};