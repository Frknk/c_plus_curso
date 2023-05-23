#include <string>
#include "profesor.cpp"

using namespace std;

class Investigador{
    protected:
    string codigo, especialidad, libros_publicados;

    public:
    // Constructor
    Investigador(string _codigo, string _especialidad, string _libros_publicados){
        codigo = _codigo;
        especialidad = _especialidad;
        libros_publicados = _libros_publicados;
    }

    // Getters
    string getCodigo(){
        return codigo;
    }

    string getEspecialidad(){
        return especialidad;
    }

    string getLibrosPublicados(){
        return libros_publicados;
    }

    // Setters
    void setCodigo(string _codigo){
        codigo = _codigo;
    }

    void setEspecialidad(string _especialidad){
        especialidad = _especialidad;
    }

    void setLibrosPublicados(string _libros_publicados){
        libros_publicados = _libros_publicados;
    }

};