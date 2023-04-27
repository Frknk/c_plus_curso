#include <fstream>
#include <string>
#include <iostream>
#include "estudiante.cpp"

using namespace std;

int main()
{
    // Facultades
    Facultad facu1("001", "Facultad de Ingenieria en Informatica y Sistemas", "FIIS");
    Facultad facu2("002", "Facultad de de Zootecnia", "ZOO");
    Facultad facu3("003", "Facultad de Mecanica Electrica", "FIME");

    // Estudiantes
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

    // Cursos
    // FIIS
    Curso curs_1("0001", "Programacion Basica", 4);
    Curso curs_2("0002", "Diseno de BD", 3);
    // ZOO
    Curso curs_3("0003", "Castrado I", 3);
    Curso curs_4("0004", "Introduccion Zootecnia I", 4);
    // FIME
    Curso curs_5("0005", "Electricidad I", 4);
    Curso curs_6("0006", "Mecanica IV", 3);

    // Estudiante a lista
    Estudiante lista_estudiantes[6] = {est1, est2, est3, est4, est5, est6};
    int maximo = sizeof(lista_estudiantes) / sizeof(lista_estudiantes[0]);

    // Cursos y notas a estudiantes
    ofstream estudiante; // Creando txt
    estudiante.open("estudiante.txt");
    if (!estudiante.is_open()) // Verificando si abre
    {
        cout << "Error abriendo: estudiante.txt" << endl;
    }
    else
    {
        for (int i = 0; i < maximo; i++)
        {
            if (lista_estudiantes[i].getFacultad().getSigla() == "FIIS")
            {
                lista_estudiantes[i].agregarCurso(curs_1);
                lista_estudiantes[i].notasnormal(14, 15, 16);
                lista_estudiantes[i].agregarCurso(curs_2);
                lista_estudiantes[i].notasnormal(20, 21, 27);
                estudiante << lista_estudiantes[i].datosString() << endl;
                estudiante << lista_estudiantes[i].stringMostrarCursos() << endl;
            }
            else if (lista_estudiantes[i].getFacultad().getSigla() == "ZOO")
            {
                lista_estudiantes[i].agregarCurso(curs_3);
                lista_estudiantes[i].notasnormal(14, 15, 16);
                lista_estudiantes[i].agregarCurso(curs_4);
                lista_estudiantes[i].notasnormal(30, 31, 37);
                estudiante << lista_estudiantes[i].datosString() << endl;
                estudiante << lista_estudiantes[i].stringMostrarCursos() << endl;
            }
            else if (lista_estudiantes[i].getFacultad().getSigla() == "FIME")
            {
                lista_estudiantes[i].agregarCurso(curs_5);
                lista_estudiantes[i].notasnormal(14, 15, 16);
                lista_estudiantes[i].agregarCurso(curs_6);
                lista_estudiantes[i].notasnormal(40, 41, 47);
                estudiante << lista_estudiantes[i].datosString() << endl;
                estudiante << lista_estudiantes[i].stringMostrarCursos() << endl;
            }
        }
    }
    estudiante.close(); // Cerrando

    // Facultad y estudiantes
    ofstream estudiantes;
    estudiantes.open("estudiantes2.txt");
    if (!estudiantes.is_open())
    {
        cout << "Error abriendo: estudiantes2.txt" << endl;
    }
    else
    {
        // Creando archivo estudiantes.txt
        // Contiene facultad y sus estudiantes
        for (int i = 0; i < maximo; i++)
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
        }
    }
    estudiantes.close();
    return 0;
}