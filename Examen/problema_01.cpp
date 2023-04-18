/*
Escribir un programa que calcule la suma de los numeros pares 
e impares de un arreglo de enteros
*/

#include <iostream>
using namespace std;

int main(){
    
    // Declarando arreglo
    int arreglo_enteros[10] = {1,2,3,4,5,6,7,8,9,10};
    // Numero de elementos maximo del arreglo
    int maximo = sizeof(arreglo_enteros)/sizeof(arreglo_enteros[0]);
    // Suma de los pares e impares
    int suma_impares = 0, suma_pares = 0;

    // Funcion para separar los numeros pares de los impares
    for (int i = 0; i < maximo; i++)
    {
        // Uso mod de 2 para ver el residuo si deja 1 es impar 
        if (arreglo_enteros[i] % 2 == 1)
        {
            cout << "Impar sumado: "<<arreglo_enteros[i] << endl; // Impresion de elemento
            suma_impares += arreglo_enteros[i]; // Sumando el elemento al total
        }
        // Si no deja un residuo usando mod de 2 es par
        if (arreglo_enteros[i] % 2 == 0)
        {
            cout << "Par sumado: "<<arreglo_enteros[i] << endl; // Impresion de elemento
            suma_pares += arreglo_enteros[i]; // Sumando el elemento al total
        }
    }
    // Imprimiendo resultados
    cout << "La suma de los numeros pares es: " << suma_pares << endl;
    cout << "La suma de los numeros impares es: " << suma_impares << endl;


}