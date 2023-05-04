#include <iostream>
#include "departamento.cpp"
#include "persona.cpp"

using namespace std;

class Empleado : Persona
{
private:
    string puesto, sueldo, antiguedad;
    Departamento departamento;

public:
    Empleado(string _puesto, string _sueldo, string _antiguedad, string _nombres, string _apellidos, string _dni, string _fecha_nac, string _edad) : Persona(_nombres, _apellidos, _dni, _fecha_nac, _edad)
    {
        puesto = _puesto;
        sueldo = _sueldo;
        antiguedad = _antiguedad;
    }

    // Getters
    string getPuesto()
    {                                     
        return puesto;
    }

    string getSueldo()
    {
        return sueldo;
    }

    string getAntiguedad()
    {
        return antiguedad;
    }

    Departamento getDepartamento()
    {
        return departamento;
    }

    // Setters
    void setPuesto(string _puesto)
    {
        puesto = _puesto;
    }

    void setSueldo(string _sueldo)
    {
        sueldo = _sueldo;
    }

    void setAntiguedad(string _antiguedad)
    {
        antiguedad = _antiguedad;
    }

    void setDepartamento(Departamento _departamento)
    {
        departamento = _departamento;
    }

    // Metodos
    string datoString()
    {
        string datos = puesto + " | " + sueldo + " " + antiguedad + " " + getNombres() + " " + getApellidos() + " " + getDni() + " " + getFechaNac() + " " + getEdad();
        return datos;
    }
};