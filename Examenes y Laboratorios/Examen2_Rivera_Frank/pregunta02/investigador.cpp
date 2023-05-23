#include <string>

using namespace std;

class Investigador {
    protected:
    string investigacion;

    public:
    // Constructor
    Investigador (string _investigacion = ""){
        investigacion = _investigacion;
    }

    // Getters
    string getInvestigacion(){
        return investigacion;
    }

    // Setters
    void setInvestigacion(string _investigacion){
        investigacion = _investigacion;
    }
};