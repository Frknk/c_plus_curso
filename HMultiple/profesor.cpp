#include <string>

using namespace std;

class Profesor{
    protected:
    string nombres, dni , facultad;

    // Constructor
    public:
    Profesor(string _nombres, string _dni, string _facultad){
        nombres = _nombres;
        dni = _dni;
        facultad = _facultad;
    }

    // Getters
    string getNombres(){
        return nombres;
    }

    string getDni(){
        return dni;
    }

    string getFacultad(){
        return facultad;
    }

    // Setters
    void setNombres(string _nombres){
        nombres = _nombres;
    }

    void setDni(string _dni){
        dni = _dni;
    }

    void setFacultad(string _facultad){
        facultad = _facultad;
    }
};
