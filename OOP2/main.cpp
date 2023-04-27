#include <iostream>
#include <string>
#include <fstream> // manejo de archivos txt file stream
// llamado a la clase
#include "estudiante.cpp"

using namespace std;

int main()
{
    // crear facultades
    Facultad facu1("001", "Facultad de Ingenieria en Informatica y Sistemas", "FIIS");
    Facultad facu2("002", "Facultad de de Zootecnia", "ZOO");

    // Estudiantes de FIIS
    Estudiante est1("2023000001", "juanito.perez@unas.edu.pe", "perez", "juanito", "44444444");
    est1.setFacultad(facu1);
    Estudiante est2("20220456", "jose.caldas@unas.edu.pe", " jose", "caldas", "234567");
    est2.setFacultad(facu1);
    Estudiante est3("20223457", "carlos.solar@unas.edu.pe", " carlos", "solar", "345678");
    est3.setFacultad(facu1);
    Estudiante est4("20223412", "marco.palacios@unas.edu.pe", "marco", "palacios", "3457177");
    est4.setFacultad(facu1);
    // Estudiantes de ZOOTECNIA
    Estudiante est5("2020007", "manuel.lopez@unas.edu.pe", "lopez", "manuel", "20458771");
    Estudiante est6("2000485", "therry.exaltacion@unas.edu.pe", "exaltacion", "therry", "2024575");
    Estudiante est7("20220050", "krystal.exaltacion@unas.edu.pe", "exaltacion", "krystal", "87541558");
    Estudiante est8("2022002", "jose.martinez@unas.edu.pe", "mantinez", "jose", "73463283");

    // crear cursos
    Curso curs_1("0001", "Programacion Basica", 4);
    Curso curs_2("0002", "Diseno de BD", 3);
    Curso curs_3("0003", "Sotfware I", 3);
    Curso curs_4("0004", "Sotfware II", 4);
    Curso curs_5("0005", "Gestion de procesos", 4);

    // agregando cursos para est1
    est1.agregarCurso(curs_1);
    est1.agregarCurso(curs_2);
    est1.agregarCurso(curs_3);
    est1.agregarCurso(curs_4);
    est1.agregarCurso(curs_5);
    est1.agregarCurso(curs_1);

    // mostrar los cursos registrados al est1
    est1.mostrarCursos();

    // Crear una lista de estudiantes
    Estudiante lista_estudiantes[8] = {est1, est2, est3, est4, est5, est6, est7, est8};
    Estudiante lista_estudiantes2[2];

    string _codigo, _correo, _apellidos, _nombres, _dni;
    int opcion = 0;
    int valor = sizeof(lista_estudiantes2) / sizeof(lista_estudiantes2[0]);
    for (int i = 0; i < valor; i++)
    {
        cout << "Ingrese codigo: ";
        cin >> _codigo;
        cout << "Ingrese correo: ";
        cin >> _correo;
        cout << "Ingrese apellidos: ";
        cin >> _apellidos;
        cout << "Ingrese nombres: ";
        cin >> _nombres;
        cout << "Ingrese dni: ";
        cin >> _dni;
        lista_estudiantes2[i] = Estudiante(_codigo, _correo, _apellidos, _nombres, _dni);
        cout << "Seleccione facultad: 1. FIIS, 2. ZOO: ";
        cin >> opcion;
        if (opcion == 1)
        {
            lista_estudiantes2[i].setFacultad(facu1);
        }
        else if (opcion == 2) // Asociamos los 2 al else
        {
            lista_estudiantes2[i].setFacultad(facu2);
        }
        else
        {
            cout << "Opcion incorrecta" << endl;
        }
    }

    // Agregar cursos a los estudiantes
    for (int i = 0; i < valor; i++)
    {
        if (lista_estudiantes2[i].getFacultad().getSigla() == "FIIS")
        {
            lista_estudiantes2[i].agregarCurso(curs_1);
            lista_estudiantes2[i].agregarCurso(curs_2);
            lista_estudiantes2[i].agregarCurso(curs_3);
            lista_estudiantes2[i].agregarCurso(curs_4);
            lista_estudiantes2[i].agregarCurso(curs_5);
        }
        else if (lista_estudiantes2[i].getFacultad().getSigla() == "ZOO")
        {
            lista_estudiantes2[i].agregarCurso(curs_1);
            lista_estudiantes2[i].agregarCurso(curs_2);
            lista_estudiantes2[i].agregarCurso(curs_3);
        }
        else
        {
            cout << "Error";
        }
    }

    // Mostrar los cursos de los estudiantes
    for (int i = 0; i < valor; i++)
    {
        lista_estudiantes2[i].getDatos();
        lista_estudiantes2[i].mostrarCursos();
        lista_estudiantes2[i].getFacultad().imprimir();
    }

    return 0;
}