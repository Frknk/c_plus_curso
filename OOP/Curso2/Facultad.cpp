#include <iostream>
#include <string>

using namespace std;

class Facultad
{

    // Atributos
protected:
    string nombre, sigla, codigo;

    // Constructor
public:
    Facultad(string _codigo, string _nombre, string _sigla)
    {
        nombre = _nombre;
        sigla = _sigla;
        codigo = _codigo;
    }

    // Metodos
    // Getters
    string getNombre()
    {
        return nombre;
    }

    string getSigla()
    {
        return sigla;
    }

    string getCodigo()
    {
        return codigo;
    }

    // Setters
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    void setSigla(string _sigla)
    {
        sigla = _sigla;
    }

    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }

    //toString
    string tosString(){
        string descripcion = codigo + "\t" + nombre + "\t" + sigla;
        return descripcion;
    }

    void imprimir(){
        cout << codigo << "\t" << nombre << "\t" << sigla << endl;
    }
};