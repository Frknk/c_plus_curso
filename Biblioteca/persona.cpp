#include <string>

using namespace std;

class Persona {
    private:
    string nombre, apellido, DNI, correo, telefono, direccion;

    public:
    // Constructor
    Persona(string _nombre = "", string _apellido = "", string _DNI = "", string _correo = "", string _telefono = "", string _direccion = ""){
        nombre = _nombre;
        apellido = _apellido;
        DNI = _DNI;
        correo = _correo;
        telefono = _telefono;
        direccion = _direccion;
    }

    // Getters
    string getNombre(){
        return nombre;
    }

    string getApellido(){
        return apellido;
    }

    string getDNI(){
        return DNI;
    }

    string getCorreo(){
        return correo;
    }

    string getTelefono(){
        return telefono;
    }

    string getDireccion(){
        return direccion;
    }

};