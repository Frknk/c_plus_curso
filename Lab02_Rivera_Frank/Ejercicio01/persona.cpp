#include <iostream>

using namespace std;

class Persona
{
protected:
    string nombres, apellidos, dni, fecha_nac, edad;

public:
    // Constructor
    Persona(string _nombres, string _apellidos, string _dni, string _fecha_nac, string _edad)
    {
        nombres = _nombres;
        apellidos = _apellidos;
        dni = _dni;
        fecha_nac = _fecha_nac;
        edad = _edad;
    }

    // Getters
    string getNombres()
    {
        return nombres;
    }

    string getApellidos()
    {
        return apellidos;
    }

    string getDni()
    {
        return dni;
    }

    string getFechaNac()
    {
        return fecha_nac;
    }

    string getEdad()
    {
        return edad;
    }

    // Setters
    void setNombres(string _nombres)
    {
        nombres = _nombres;
    }

    void setApellidos(string _apellidos)
    {
        apellidos = _apellidos;
    }

    void setDni(string _dni)
    {
        dni = _dni;
    }

    void setFechaNac(string _fecha_nac)
    {
        fecha_nac = _fecha_nac;
    }

    void setEdad(string _edad)
    {
        edad = _edad;
    }
};
