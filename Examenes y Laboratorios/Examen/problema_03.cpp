/*
Escribir un programa que solicite al usuario un arreglo y luego 
ordene el arreglo de mayor a menor y de menor a mayor
*/

#include <iostream>
using namespace std;

int main(){
    int arreglo [10]; // Declarando arreglo
    int maximo = sizeof(arreglo)/sizeof(arreglo[0]); // Numero de elementos maximo del arreglo
    int temp; // Variable temporal para el ordenamiento

    for (int i = 0; i < maximo; i++) // Funcion para ingresar los datos al arreglo
    {
        cout << "Ingrese el elemento " << i+1 << " del arreglo: "; // Pidiendo datos
        cin >> arreglo[i]; // Pidiendo datos
    }
    
    // Funcion para ordenar el arreglo de mayor a menor
    for (int i = 0; i < maximo; i++) // Recorriendo arreglo
    {
        for (int j = 0; j < maximo; j++) // Recorriendo arreglo
        {
            if (arreglo[i] > arreglo[j]) // Comparando valores
            {
                temp = arreglo[i]; // Intercambiando valores
                arreglo[i] = arreglo[j]; // Intercambiando valores
                arreglo[j] = temp; // Intercambiando valores
            }
        }
    }

    // Imprimiendo arreglo ordenado de mayor a menor
    cout << "Arreglo ordenado de mayor a menor: ";
    for (int i = 0; i < maximo; i++)
    {
        cout << arreglo[i] << " "; // Imprimiendo arreglo
    }

    // Funcion para ordenar el arreglo menor a mayor
    for (int i = 0; i < maximo; i++) // Recorriendo arreglo
    {
        for (int j = 0; j < maximo; j++) // Recorriendo arreglo
        {
            if (arreglo[i] < arreglo[j]) // Comparando valores
            {
                temp = arreglo[i]; // Intercambiando valores
                arreglo[i] = arreglo[j]; // Intercambiando valores
                arreglo[j] = temp; // Intercambiando valores
            }
        }
    }

    
    // Imprimiendo arreglo ordenado de menor a mayor
    cout << endl << "Arreglo ordenado de menor a mayor: ";
    for (int i = 0; i < maximo; i++)
    {
        cout << arreglo[i] << " "; // Imprimiendo arreglos
    }
}