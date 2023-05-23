#include <iostream>
using namespace std;

/*
Obtener promedio de 3 notas a traves de una funcion
*/

float promedio(float nota1, float nota2, float nota3){ // Requiere insertar 3 notas usando float porque puede ser decimal
    float promediofinal = (nota1+nota2+nota3)/3; // Obtener su suma y dividir el total entre 3
    return promediofinal; // Devolver el resultado
}

int main(){
    float nota1,nota2,nota3,nota_final; // Declarando variables
    cout << "Inserte sus notas: "; cin >> nota1; cin >> nota2; cin >> nota3;
    nota_final = promedio(nota1,nota2,nota3); //Usar la funcion
    cout << "Su promedio final es: " << nota_final;
    return 0;
}
