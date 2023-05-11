#include <string>
#include "persona.cpp"

using namespace std;

class Bibliotecario : public Persona{
    private:
    string b_codigo;

    public:
    // Constructor
    Bibliotecario(string _nombre = "", string _apellido = "", string _DNI = "", string _correo = "", string _telefono = "", string _direccion = "", string _b_codigo = ""){
        b_codigo = _b_codigo;
    }

    string getCodigo(){
        return b_codigo;
    }
    string getDatos(){
        return b_codigo + " " + getNombre() + " " + getApellido() + " " + getDNI() + " " + getCorreo() + " " + getTelefono() + " " + getDireccion();
    }
};