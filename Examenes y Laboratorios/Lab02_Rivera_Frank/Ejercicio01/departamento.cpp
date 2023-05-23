#include <iostream>

using namespace std;

class Departamento{
    protected:
    string nombre, siglas;

    public:
    Departamento(string _nombre = "", string _siglas = ""){
        nombre = _nombre;
        siglas = _siglas;
    }

    // Getters
    string getNombre(){
        return nombre;
    }

    string getSiglas(){
        return siglas;
    }

    // Setters
    void setNombre(string _nombre){
        nombre = _nombre;
    }

    void setSiglas(string _siglas){
        siglas = _siglas;
    }

};