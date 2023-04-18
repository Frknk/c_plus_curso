/*  
Escribir un programa que lea una lista de palabras y las ordene alfabéticamente.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string lista[5]; // Declarando arreglo
    string temp; // Declarando variable temporal

    // Funcion para ingresar los datos al arreglo
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese la palabra " << i+1 << " de la lista: "; // Pidiendo datos
        cin >> lista[i]; // Pidiendo datos
    }

    // Funcion para ordenar alfabeticamente
    // es como ordenar de menor a mayor
    for (int i = 0; i < 5; i++) // Recorriendo arreglo
    {
        for (int j = 0; j < 5; j++) // Recorriendo arreglo
        {
            // Increiblemente los strings se comparan por su primera letra
            if (lista[i] < lista[j]) // Comparando valores
            {
                temp = lista[i]; // Asignando valor temporal
                lista[i] = lista[j]; // Asignando valor
                lista[j] = temp; // Asignando valor 
            }
        }
    }

    // Imprimiendo arreglo ordenado
    cout << "Lista ordenada alfabeticamente: ";
    for (int i = 0; i < 5; i++) // Recorriendo arreglo
    {
        cout << lista[i] << " "; // Imprimiendo arreglo 
    }
}