#include <string>
#include "libro.cpp"
#include "bibliotecario.cpp"

using namespace std;

class Usuario : public Persona{
    private:
    string u_codigo;
    Libro libro;

    public:
    // Constructor
    Usuario(string _nombre = "", string _apellido = "", string _DNI = "", string _correo = "", string _telefono = "", string _direccion = "", string _u_codigo = ""){
        u_codigo = _u_codigo;
    }

    // Metodos
    string registrarLibro(Libro libro){

        string registro = u_codigo + " " + "| Libro registrado \n";
        registro = registro + libro.getData() + "\n";
        return registro;
    }

    string getDatos(){
        return u_codigo + " " + getNombre() + " " + getApellido() + " " + getDNI() + " " + getCorreo() + " " + getTelefono() + " " + getDireccion();
    }
};