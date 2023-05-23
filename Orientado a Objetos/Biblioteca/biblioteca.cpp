#include <string>
#include <iostream>
#include "usuario.cpp"

using namespace std;

class Biblioteca
{
private:
    string codigo, nombre, direccion, telefono;
    string prestamo;
    Libro libros[5];
    Usuario usuarios;
    Bibliotecario bibliotecarios;
    int numLibro = 0;

public:
    
    Biblioteca(string _codigo, string _nombre, string _direccion, string _telefono){
        codigo = _codigo;
        nombre = _nombre;
        direccion = _direccion;
        telefono = _telefono;
        numLibro = 0;
        prestamo = "";
    }

    // Setters
    void setNumLibro(int _numLibro){
        numLibro = _numLibro;
    }

    // Metodos
    void prestamoLibro(Bibliotecario bibliotecario, Usuario usuario, Libro libro){
        if (numLibro > 0){
            libros[numLibro] = libro;
            numLibro--;
            prestamo = prestamo + "Bibliotecario : " + bibliotecario.getCodigo() + "\n";
            prestamo = prestamo + usuario.registrarLibro(libro);         
        }
        else{
            cout << "No hay libros para prestar \n";
        }
    }

    void registrarLibro(Libro libro){
        if (numLibro < 5){
            libros[numLibro] = libro;
            numLibro++;
        }
        else{
            cout << "No se puede registrar mas libros" << endl;
        }
    }

    string imprimirPrestamos(){
        return prestamo;
    } 



};