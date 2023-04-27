#include <fstream>
#include <string>
#include <iostream>
#include "estudiante.cpp"

using namespace std;

int main(){

    Facultad facu1("001", "Facultad de Ingenieria en Informatica y Sistemas", "FIIS");
    Facultad facu2("002", "Facultad de de Zootecnia", "ZOO");
    Facultad facu3("003", "Facultad de Mecanica Electrica", "FIME");

    Estudiante est1("2023000001", "juanito.perez@unas.edu.pe", "perez", "juanito", "44444444");
    est1.setFacultad(facu1); // Agregando a facultad
    Estudiante est2("20220456", "jose.caldas@unas.edu.pe", " jose", "caldas", "234567");
    est2.setFacultad(facu1);
    Estudiante est3("20223457", "carlos.solar@unas.edu.pe", " carlos", "solar", "345678");
    est3.setFacultad(facu2);
    Estudiante est4("20223412", "marco.palacios@unas.edu.pe", "marco", "palacios", "3457177");
    est4.setFacultad(facu2);
    Estudiante est5("2020007", "manuel.lopez@unas.edu.pe", "lopez", "manuel", "20458771");
    est5.setFacultad(facu3);
    Estudiante est6("2000485", "therry.exaltacion@unas.edu.pe", "exaltacion", "therry", "2024575");
    est6.setFacultad(facu3);
    Estudiante lista_estudiantes[6] = {est1, est2, est3, est4, est5, est6};
    int maximo = sizeof(lista_estudiantes) / sizeof(lista_estudiantes[0]);

    ofstream estudiantes;
    estudiantes.open("estudiantes2.txt");
    if (!estudiantes.is_open())
    {
        cout << "Error opening file: estudiantes2.txt" << endl;
    }
    else
    {
        // Creando archivo estudiantes.txt
        // Contiene facultad y sus estudiantes
        for (int i = 0; i <= maximo; i++)
        {
            if (lista_estudiantes[i].getFacultad().getSigla() == "FIIS")
            {
                estudiantes << lista_estudiantes[i].getFacultad().toString() << "\n";
                estudiantes << lista_estudiantes[i].datosString() << "\n";
            }

            else if (lista_estudiantes[i].getFacultad().getSigla() == "ZOO")
            {
                estudiantes << lista_estudiantes[i].getFacultad().toString() << "\n";
                estudiantes << lista_estudiantes[i].datosString() << "\n";
            }

            else if (lista_estudiantes[i].getFacultad().getSigla() == "FIME")
            {
                estudiantes << lista_estudiantes[i].getFacultad().toString() << "\n";
                estudiantes << lista_estudiantes[i].datosString() << "\n";
            }

            else
            {
                cout << "Error";
            }
        }
        estudiantes.close();
    }

    // Creando archivo estudiante.txt
    return 0;
}