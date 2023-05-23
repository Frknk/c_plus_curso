#include <iostream>
#include <string>

using namespace std;

class Curso
{
    private:
    // Atributos
    float nota1,nota2,nota3;
    string nombre;

    public:
    // Constructor
    Curso (float _nota1, float _nota2, float _nota3, string _nombre)
    {
        nota1 = _nota1;
        nota2 = _nota2;
        nota3 = _nota3;
        nombre = _nombre;
    }

    // Getters
    float getNota1()
    {
        return nota1;
    }

    float getNota2()
    {
        return nota2;
    }

    float getNota3()
    {
        return nota3;
    }

    string getNombre()
    {
        return nombre;
    }

    // Setters
    void setNota1(float _nota1)
    {
        nota1 = _nota1;
    }

    void setNota2(float _nota2)
    {
        nota2 = _nota2;
    }

    void setNota3(float _nota3)
    {
        nota3 = _nota3;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    // Metodoss
    float promedio()
    {
        return (nota1 + nota2 + nota3) / 3;
    }

    void imprimir(){
        cout << "Nombre: " << nombre << endl;
        cout << "Nota 1: " << nota1 << endl;
        cout << "Nota 2: " << nota2 << endl;
        cout << "Nota 3: " << nota3 << endl;
        cout << "Promedio: " << promedio() << endl;
    }
};