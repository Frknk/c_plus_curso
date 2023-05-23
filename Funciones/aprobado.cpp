#include <iostream>
using namespace std;

/*
Obtener promedio de 3 notas a traves de una funcion y designar una nota en letra
*/

float promedio(float nota1, float nota2, float nota3){ // Requiere insertar 3 notas usando float porque puede ser decimal
    float promediofinal = (nota1+nota2+nota3)/3; // Obtener su suma y dividir el total entre 3
    return promediofinal; // Devolver el resultado
}

int main(){
    float nota1,nota2,nota3,nota_final; // Declarando variables
    char nota_letra;
    cout << "Inserte sus notas: "; cin >> nota1; cin >> nota2; cin >> nota3;
    nota_final = promedio(nota1,nota2,nota3); //Usar la funcion
    if (nota_final >= 18 && nota_final <= 20){ // Asignar una letra en funcion a la nota
        nota_letra = 'A';
    }
    if (nota_final < 18 && nota_final >= 15){ // Asignar una letra en funcion a la nota
        nota_letra = 'B';
    }
    if (nota_final < 15 && nota_final >= 11){ // Asignar una letra en funcion a la nota
        nota_letra = 'C';
    }
    if (nota_final < 11 && nota_final >= 5){ // Asignar una letra en funcion a la nota
        nota_letra = 'D';
    }
    if(nota_final < 5){ // Asignar una letra en funcion a la nota
        nota_letra = 'F';
    }
    switch (nota_letra) // Segun la letra realizar una accion
    {
    case 'A':
        cout << "Tu nota es " << nota_letra; 
        break;
    case 'B':
        cout << "Tu nota es " << nota_letra; 
        break;
    case 'C':
        cout << "Tu nota es " << nota_letra;
        break;
    case 'D':
        cout << "Tu nota es " << nota_letra;
        break;
    case 'F':
        cout << "Tu nota es " << nota_letra;
        break;   
    default: // Si no se obtiene ninguna de las anteriores
        cout << "Invalido";
        break;
    }
}
