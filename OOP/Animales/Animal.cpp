#include <iostream>
#include <string>

using namespace std;

class Animal{
    protected:
    string orejas,cola,ojos;
    int nro_patas;
    string familia;

    public:
    Animal(string _orejas, string _cola, string _ojos, int _nro_patas, string _familia){
        familia = _familia;
    }

    // Getters
    string getFamilia(){
        return familia;
    }
    // Setters
    void setFamilia(string _familia){
        familia = _familia;
    }
};