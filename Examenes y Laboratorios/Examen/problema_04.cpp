/*
Escribir un programa que encuentre el numero mayor, el numero menor, el promedio,
la media, la mediana, cual es el numero que se repite mas veces de un arreglo de
enteros de 10 items
*/

#include <iostream>
using namespace std;

int main(){

    // Declarando arreglo
    int arreglo[10];
    // Numero de elementos maximo del arreglo
    int maximo = sizeof(arreglo)/sizeof(arreglo[0]);


    // Funcion para ingresar los datos al arreglo
    for (int i = 0; i < maximo; i++)
    {
        cout << "Ingrese el elemento " << i+1 << " del arreglo: "; // Pidiendo datos
        cin >> arreglo[i]; // Pidiendo datos
    }


    // Funcion para encontrar el numero mayor
    int mayor = arreglo[0]; // Declarando variable
    for (int i = 0; i < maximo; i++) // Recorriendo arreglo
    {
        if (arreglo[i] > mayor) // Comparando valores
        {
            mayor = arreglo[i]; // Asignando valor
        }
    }


    // Funcion para encontrar el numero menor
    int menor = arreglo[0]; // Declarando variable
    for (int i = 0; i < maximo; i++) // Recorriendo arreglo
    {
        if (arreglo[i] < menor) // Comparando valores
        {
            menor = arreglo[i]; // Asignando valor
        }
    }


    // Funcion para encontrar el promedio
    int promedio = 0; // Declarando variable
    for (int i = 0; i < maximo; i++) // Recorriendo arreglo
    {
        promedio += arreglo[i]; // Sumando valores
    }
    promedio = promedio / maximo; // Calculando promedio


    // Funcion para encontrar la media
    int media = 0; // Declarando variable
    for (int i = 0; i < maximo; i++) // Recorriendo arreglo
    {
        media += arreglo[i]; // Sumando valores
    }
    // La media es lo mismo que el promedio
    media = media / maximo; // Calculando media
    

    // Funcion para encontrar la mediana
    int mediana = 0; // Declarando variable
    if (maximo % 2 == 0) // Si el numero de elementos es par
    {
        // Quitar un elemento y dividir entre 2
        mediana = (arreglo[maximo/2] + arreglo[(maximo/2)-1]) / 2; // Calculando mediana
    }
    else // Si el numero de elementos es impar
    {
        // Dividir entre 2 el numero de elementos para encontrar el central
        mediana = arreglo[maximo/2]; // Calculando mediana
    }


    // Funcion para encontrar el numero que se repite mas veces
    int mas_repite = 0; // Declarando variable
    int repeticiones = 0; // Declarando variable

    // Recorriendo el arreglo 2 veces para encontrar repetidos
    // Si no hay repetidos suele imprimir el primer elemento
    // Si hay la misma cantidad de repetidos suele imprimir el ultimo repetido
    for (int i = 0; i < maximo; i++) // Recorriendo arreglo
    {
        int contador = 0; // Declarando variable
        for (int j = 0; j < maximo; j++) // Recorriendo arreglo
        {
            if (arreglo[i] == arreglo[j]) // Comparando valores
            {
                contador++; // Contando repeticiones
            }
        }
        if (contador > repeticiones) // Comparando valores
        {
            mas_repite = arreglo[i]; // Asignando valor
            repeticiones = contador; // Asignando valor
        }
    }


    // Imprimiendo resultados
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    cout << "El promedio es: " << promedio << endl;
    cout << "La media es: " << media << endl;
    cout << "La mediana es: " << mediana << endl;
    cout << "El numero que se repite mas veces es: " << mas_repite << endl;
}