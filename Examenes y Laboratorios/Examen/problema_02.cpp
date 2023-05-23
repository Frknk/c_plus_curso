/*
Escribir un programa para calcular el area de un triangulo y el perimetro
*/

#include <iostream>
using namespace std;

int main(){
    int base, altura, perimetro, area; // Declarando variables
    cout << "Ingrese la base del triangulo: "; // Pidiendo datos
    cin >> base;
    cout << "Ingrese la altura del triangulo: "; // Pidiendo datos
    cin >> altura;
    perimetro = base * 3; // Calculando perimetro
    area = (base * altura) / 2; // Calculando area
    cout << "El perimetro del triangulo es: " << perimetro << endl; // Imprimiendo resultados
    cout << "El area del triangulo es: " << area << endl; // Imprimiendo resultados

}