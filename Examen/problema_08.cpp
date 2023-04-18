/*
Escriba un programa que solicite el ingreso de 3 notas al usuario, y luego que calcule 
el promedio de las notas
*/

#include <iostream>
using namespace std;

// Funcion para el promedio
float promedio(float nota1, float nota2, float nota3)
{
    return (nota1 + nota2 + nota3) / 3; // Retornando promedio
}

int main(){
    float nota1, nota2, nota3; // Declarando variables

    // Pidiendo datos
    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    // Imprimiendo promedio
    cout << "El promedio de las notas es: " << promedio(nota1, nota2, nota3);
}