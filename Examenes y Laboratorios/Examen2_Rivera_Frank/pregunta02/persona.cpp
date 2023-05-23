#include <string>

using namespace std;

class Persona{
    protected:
    string nombre, apellido, dni;

    public:
    Persona (string _nombre, string _apellido, string _dni){
        nombre = _nombre;
        apellido = _apellido;
        dni = _dni;
    }

    // Getters
    string getNombre(){
        return nombre;
    }

    string getApellido(){
        return apellido;
    }

    string getDni(){
        return dni;
    }

    // Setters
    void setNombre(string _nombre){
        nombre = _nombre;
    }

    void setApellido(string _apellido){
        apellido = _apellido;
    }

    void setDni(string _dni){
        dni = _dni;
    }
};