#include <string>
#include "persona.cpp"
#include "estudiante.cpp"
#include "investigador.cpp"

using namespace std;

class EstudianteInvestigador : public Persona, public Estudiante, public Investigador
{
    protected:
    string codigo;

    public:
    // Constructor
    EstudianteInvestigador (string _codigo, string _nombre, string _apellido, string _dni, string _facultad, string _semestre, string _investigacion) : Persona(_nombre, _apellido, _dni), Estudiante(_facultad, _semestre) , Investigador (_investigacion)
    {
        codigo = _codigo;
    }

    // Metodos
    string getDatos (){
        return codigo + " " + nombre + " " + apellido + " " + dni + " " + facultad + " " + semestre + " " + investigacion;
    }
};
