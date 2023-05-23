#include <iostream>
#include "profesor_investigador.cpp"

int main(){

    // Declarando
    ProfesorInvestigador profesor_investigador1("Juan Perez", "12345678", "Ingenieria", "123", "Ingenieria de Software", "10", "Sistema de gestion de inventarios");
    ProfesorInvestigador profesor_investigador2("Maria Lopez", "87654321", "Ingenieria", "321", "Ingenieria de Software", "5", "Sistema de gestion de inventarios");
    ProfesorInvestigador profesor_investigador3("Carlos Ramirez", "45678912", "Ingenieria", "456", "Ingenieria de Software", "3", "Sistema de gestion de inventarios");
    ProfesorInvestigador profesor_investigador4("Luisa Torres", "98765432", "Ingenieria", "654", "Ingenieria de Software", "2", "Sistema de gestion de inventarios");
    ProfesorInvestigador profesor_investigador5("Jose Perez", "21436587", "Ingenieria", "789", "Ingenieria de Software", "1", "Sistema de gestion de inventarios");

    // Array
    ProfesorInvestigador profesores_investigadores[5] = {profesor_investigador1, profesor_investigador2, profesor_investigador3, profesor_investigador4, profesor_investigador5};

    // Mostrando
    for(int i = 0; i < 5; i++){
        cout << profesores_investigadores[i].getData() << endl;
    }

    return 0;
}