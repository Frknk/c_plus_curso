#include <string>
#include "Animal.cpp"

using namespace std;

class Gato : Animal
{
protected:
    int vidas = 0;
    bool maulla, domesticado;

public:
    // Constructor
    Gato(string _orejas, string _cola, string _ojos, bool _maulla, bool _domesticado, int _nro_patas, string _familia, int _vidas)
        : Animal(_orejas, _cola, _ojos, _nro_patas, _familia)
    {
        vidas = _vidas;
        maulla = _maulla;
        domesticado = _domesticado;
        
    }

    // Getters
    int getVidas()
    {
        return vidas;
    }

    bool getMaulla()
    {
        return maulla;
    }

    bool getDomesticado()
    {
        return domesticado;
    }

    // Setters
    void setVidas(int _vidas)
    {
        vidas = _vidas;
    }

    void setMaulla(bool _maulla)
    {
        maulla = _maulla;
    }

    void setDomesticado(bool _domesticado)
    {
        domesticado = _domesticado;
    }

    void imprimir(){
        cout << "Vidas: " << vidas << endl;
        cout << "Maulla: " << maulla << endl;
        cout << "Domesticado: " << domesticado << endl;
        cout << "Orejas: " << getOrejas() << endl;
        cout << "Cola: " << getCola() << endl;
        cout << "Ojos: " << getOjos() << endl;
        cout << "Nro Patas: " << getNroPatas() << endl;
        cout << "Familia: " << getFamilia() << endl;
    }
};