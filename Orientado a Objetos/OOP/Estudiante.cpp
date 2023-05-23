#include <string>
#include <iostream>
// #include <time>

using namespace std;

class Estudiante
{
private:
    // atributos
    string codigo;
    string nombre;
    string apellido;
    int edad;
    string dni;
    // datetime fecha_nacimiento;

    // metodos y funciones
public:
    // constructor
    Estudiante(string nom, string ap, string _dni, int _edad)
    {
        nombre = nom;
        apellido = ap;
        dni = _dni;
        edad = _edad;
    }

    int getEdad()
    {
        return edad;
    }

    string getCodigo()
    {
        return codigo;
    }

    string getNombre()
    {
        return nombre;
    }
    string getApellido()
    {
        return apellido;
    }

    string getDni()
    {
        return dni;
    }

    void setEdad(int _edad)
    {
        edad = _edad;
    }

    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    void setApellido(string _apellido)
    {
        apellido = _apellido;
    }
    void setDni(string _dni)
    {
        dni = _dni;
    }
    void imprimir()
    {
        cout << "Datos: " << nombre << " " << apellido << " " << dni << " " << edad << "\n";
    }
    // datetime fecha_nacimiento;
    // datetime fecha_nacimiento;
};

int main()
{
    Estudiante est("Jose", "Lopez", "6304467", 17);
    Estudiante est2("Juan", "Win", "63041237", 18);
    Estudiante est3("Luis", "Col", "6874467", 15);
    cout << "Los datos de los estudiantes son: " << endl;
    est.imprimir();
    est2.imprimir();
    est3.imprimir();

    est3.setNombre("Anastacio");
    est3.setDni("89745623");
    est3.setEdad(20);
    est3.imprimir();
}