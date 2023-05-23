#include <iostream>
#include <fstream>
#include "estudiante_investigador.cpp"

using namespace std;

int main()
{

    // Estudiantes investigadores
    EstudianteInvestigador estudiante1("201910111", "Juan", "Perez", "12345678", "FIIS", "3", "Inteligencia Artifical");
    EstudianteInvestigador estudiante2("201910222", "Maria", "Gomez", "87654321", "FIIS", "3", "Inteligencia Artificial");
    EstudianteInvestigador estudiante3("201910333", "Pedro", "Garcia", "12345678", "FIIS", "4", "Redes Neuronales");
    EstudianteInvestigador estudiante4("201910444", "Ana", "Gutierrez", "87654321", "FIIS", "4", "Redes Neuronales");

    // Arreglo estudiantes
    EstudianteInvestigador estudiantes[4] = {estudiante1, estudiante2, estudiante3, estudiante4};
    int max = sizeof(estudiantes) / sizeof(estudiantes[0]);

    // Archivo txt
    ofstream archivo("estudiantes_investigadores.txt");
    // Imprimir dato por estudiante
    archivo << "Estudiantes: \n";
    for (size_t i = 0; i < max; i++)
    {
        archivo << estudiantes[i].getDatos() << "\n";
    }
    // Imprimir dato por semestre
    archivo << "\n\nEstudiantes por semestre: \n";
    archivo << "Semestre 3: \n Investigacion: " + estudiante1.getInvestigacion() + "\n";
    for (size_t i = 0; i < max; i++)
    {
        if (estudiantes[i].getSemestre() == "3")
        {
            archivo << estudiantes[i].getDatos() << "\n";
        }
    }
    archivo << "\nSemestre 4: \n Investigacion: " + estudiante3.getInvestigacion() + "\n";
    for (size_t i = 0; i < max; i++)
    {
        if (estudiantes[i].getSemestre() == "4")
        {
            archivo << estudiantes[i].getDatos() << "\n";
        }
    }
    archivo.close();

    return 0;
}
