#include <iostream>
#include <string>
#include "Persona.cpp"

using namespace std;

class Estudiante : Persona
{
private:
    string codigo, facultad, correo;

public:
    Estudiante(string _codigo, string _facultad, string _correo, string _apellidos, string _nombres, string _direccion, string _dni, string _fecha_nacimiento) : Persona (_apellidos, _nombres, _direccion, _dni, _fecha_nacimiento)       
    {
        codigo = _codigo;
        facultad = _facultad;
        correo = _correo;
    }
    // Getters
    string getCodigo()
    {
        return codigo;
    }
    string getFacultad()
    {
        return facultad;
    }
    string getCorreo()
    {
        return correo;
    }
    // Setters
    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }
    void setFacultad(string _facultad)
    {
        facultad = _facultad;
    }
    void setCorreo(string _correo)
    {
        correo = _correo;
    }
    void getDatos(){
        
    }
    void imprimir()
    {
        cout << "Codigo: " << codigo << endl;
        cout << "Facultad: " << facultad << endl;
        cout << "Correo: " << correo << endl;
        cout << "Apellidos: " << getApellidos() << endl;
        cout << "Nombres: " << getNombres() << endl;
        cout << "Direccion: " << getDireccion() << endl;
        cout << "DNI: " << getDni() << endl;
        cout << "Fecha Nacimiento: " << getFechaNacimiento() << endl;
    }
};