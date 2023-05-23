#include <string>

using namespace std;

class Animal
{
protected:
    string orejas, cola, ojos;
    int nro_patas = 0;
    string familia;

public:
    Animal(string _orejas, string _cola, string _ojos, int _nro_patas, string _familia)
    {
        orejas = _orejas;
        cola = _cola;
        ojos = _ojos;
        nro_patas = _nro_patas;
        familia = _familia;
    }

    // Getters
    string getFamilia()
    {
        return familia;
    }

    string getOrejas()
    {
        return orejas;
    }

    string getCola()
    {
        return cola;
    }

    string getOjos()
    {
        return ojos;
    }

    int getNroPatas()
    {
        return nro_patas;
    }

    // Setters
    void setFamilia(string _familia)
    {
        familia = _familia;
    }

    void setOrejas(string _orejas)
    {
        orejas = _orejas;
    }

    void setCola(string _cola)
    {
        cola = _cola;
    }

    void setOjos(string _ojos)
    {
        ojos = _ojos;
    }

    void setNroPatas(int _nro_patas)
    {
        nro_patas = _nro_patas;
    }
};
