#include <string>
#include "Animal.cpp"

using namespace std;

class Perro : Animal
{
protected:
    bool ladra, domesticado;
    
public:
    Perro(string _orejas, string _cola, string _ojos, int _nro_patas, string _familia, bool _ladra)
        : Animal(_orejas, _cola, _ojos, _nro_patas, _familia)
    {
        ladra = _ladra;
    }

    bool getLadra()
    {
        return ladra;
    }

    void setLadra(bool _ladra)
    {
        ladra = _ladra;
    }
};