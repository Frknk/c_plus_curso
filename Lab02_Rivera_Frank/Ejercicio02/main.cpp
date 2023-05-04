#include "movilidad.cpp"
#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    // Declarando automoviles
    Movilidad automovil1("1.6", "5", "4", "4", "5 Estrellas", "Rojo", "Toyota", "Automovil");
    Movilidad automovil2("1.8", "5", "4", "4", "4 Estrellas", "Azul", "Nissan", "Automovil");
    Movilidad automovil3("1.7", "5", "4", "4", "3 Estrellas", "Verde", "Hyundai", "Automovil");
    Movilidad automovil4("2", "5", "4", "4", "4 Estrellas", "Blanco", "Mercedes", "Automovil");
    Movilidad automovil5("1.6", "5", "4", "4", "5 Estrellas", "Negro", "Toyota", "Automovil");
    Movilidad automovil6("1.8", "5", "4", "4", "4 Estrellas", "Gris", "Nissan", "Automovil");
    Movilidad automovil7("1.7", "5", "4", "4", "3 Estrellas", "Amarillo", "Hyundai", "Automovil");
    Movilidad automovil8("2", "5", "4", "4", "4 Estrellas", "Negro", "Mercedes", "Automovil");
    Movilidad automovil9("5", "5", "4", "4", "5 Estrellas", "Plata", "BMW", "Automovil");
    Movilidad automovil10("1", "2", "4", "4", "5 Estrellas", "Azul", "Volkswagen", "Automovil");

    // Declarando motocicletas
    Movilidad motocicleta1("1", "2", "2", "0", "3 Estrellas", "Rojo", "Honda", "Motocicleta");
    Movilidad motocicleta2("1.7", "2", "2", "0", "4 Estrellas", "Naranja", "KTM", "Motocicleta");
    Movilidad motocicleta3("1.6", "2", "2", "0", "5 Estrellas", "Verde", "Kawasaki", "Motocicleta");
    Movilidad motocicleta4("1", "2", "2", "0", "3 Estrellas", "Blanco", "Honda", "Motocicleta");
    Movilidad motocicleta5("1.4", "2", "2", "0", "4 Estrellas", "Azul", "Pulsar", "Motocicleta");

    // Arreglos
    Movilidad movilidad_arr[15] = {automovil1, automovil2, automovil3, automovil4, automovil5, automovil6, automovil7, automovil8, automovil9, automovil10, motocicleta1, motocicleta2, motocicleta3, motocicleta4, motocicleta5};

    int max1 = sizeof(movilidad_arr) / sizeof(movilidad_arr[0]);

    // Creando txt
    ofstream archivo;
    archivo.open("vehiculos2.txt");

    // Escribiendo en txt
    archivo << "Motocar Denis S.A." << "\n";
    archivo << ".- Automoviles :" << "\n";
    for (int i = 0; i < max1; i++)
    {
        if (movilidad_arr[i].getTipo() == "Automovil"){
        archivo << movilidad_arr[i].getDatos() << "\n";}
    }

    archivo << ".- Motocicletas :" << "\n";
    for (int i = 0; i < max1; i++)
    {
        if (movilidad_arr[i].getTipo() == "Motocicleta"){
        archivo << movilidad_arr[i].getDatos() << "\n";}
    }

    archivo.close();

    return 0;
}