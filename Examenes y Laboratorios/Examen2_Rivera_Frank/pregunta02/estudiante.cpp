#include <string>

using namespace std;

class Estudiante {
    protected:
    string facultad, semestre;

    public:
    // Constructor
    Estudiante (string _facultad, string _semestre){
        facultad = _facultad;
        semestre = _semestre;
    }

    // Getters
    string getFacultad(){
        return facultad;
    }

    string getSemestre(){
        return semestre;
    }

    // Setters
    void setFacultad(string _facultad){
        facultad = _facultad;
    }

    void setSemestre(string _semestre){
        semestre = _semestre;
    }


};
