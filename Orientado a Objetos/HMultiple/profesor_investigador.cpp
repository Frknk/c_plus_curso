#include <string>
#include "profesor.cpp"
#include "investigador.cpp"

using namespace std;

class ProfesorInvestigador : public Profesor , public Investigador{
    private:
    string proyecto_investigacion;

    public:
    // Constructor
    ProfesorInvestigador(string _nombres, string _dni, string _facultad, string _codigo, string _especialidad, string _libros_publicados, string _proyecto_investigacion) : Profesor(_nombres, _dni, _facultad), Investigador(_codigo, _especialidad, _libros_publicados){
        proyecto_investigacion = _proyecto_investigacion;
    }

    // Getters
    string getProyectoInvestigacion(){
        return proyecto_investigacion;
    }

    // Setters
    void setProyectoInvestigacion(string _proyecto_investigacion){
        proyecto_investigacion = _proyecto_investigacion;
    }

    string getData(){
        return "Nombres: " + nombres + "\nDNI: " + dni + "\nFacultad: " + facultad + "\nCodigo: " + codigo + "\nEspecialidad: " + especialidad + "\nLibros publicados: " + libros_publicados + "\nProyecto de investigacion: " + proyecto_investigacion;
    }

};