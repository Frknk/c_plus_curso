#include <iostream>
#include <string>
#include "Animal.cpp"

class Gato : Animal {
    protected:
    int vidas;
    bool maulla, domesticado;

    public:
    Gato(int _vidas, string _familia) : Animal(_familia){
        vidas = _vidas;
    }

    int getVidas(){
        return vidas;
    }

    void setVidas(int _vidas){
        vidas = _vidas;
    }

};