#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    // Atributos
    string apellidos, nombres;
    string direccion, dni;
    string fecha_nacimiento;

public:
    // Constructor
    Persona(string _apellidos, string _nombres, string _direccion, string _dni, string _fecha_nacimiento)
    {
        apellidos = _apellidos;
        nombres = _nombres;
        direccion = _direccion;
        dni = _dni;
        fecha_nacimiento = _fecha_nacimiento;
    }
    // Getters
    string getApellidos()
    {
        return apellidos;
    }

    string getNombres()
    {
        return nombres;
    }
    string getDireccion()
    {
        return direccion;
    }
    string getDni()
    {
        return dni;
    }
    string getFechaNacimiento()
    {
        return fecha_nacimiento;
    }

    // Setters
    void setApellidos(string _apellidos)
    {
        apellidos = _apellidos;
    }
    void setNombres(string _nombres)
    {
        nombres = _nombres;
    }
    void setDireccion(string _direccion)
    {
        direccion = _direccion;
    }
    void setDni(string _dni)
    {
        dni = _dni;
    }
    void setFechaNacimiento(string _fecha_nacimiento)
    {
        fecha_nacimiento = _fecha_nacimiento;
    }
    // Imprimir datos
    /*void imprimir()
    {
        cout << "Apellidos: " << apellidos << endl;
        cout << "Nombres: " << nombres << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "DNI: " << dni << endl;
        cout << "Fecha Nacimiento: " << fecha_nacimiento << endl;
    }*/
};