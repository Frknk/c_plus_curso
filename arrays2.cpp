#include <iostream>
using namespace std;

int main(){
    int arreglo1[5];
    int size = sizeof(arreglo1)/sizeof(arreglo1[0]);
    // Recorre el arreglo e inserta valores
    for (int i = 0; i < size; i++)
    {
        cout << "Inserte un valor: "; cin >> arreglo1[i];
    }
    
    // Busca el menor
    int menor = arreglo1[0];
    for (int i = 1; i < size; i++)
    {
        if (arreglo1[i]<menor)
        {
            menor = arreglo1[i];
        }
        
    }
    cout << "El numero menor es: " << menor << endl;

    // Busca el mayor
    int mayor = arreglo1[0];
    for (int i = 1; i < size; i++)
    {
        if (arreglo1[i]>mayor)
        {
            mayor = arreglo1[i];
        }
    }
    cout << "El numero mayor es: " << mayor << endl;

    // Buscar el numero que se repite
    // Doble recorrido para buscar un elemento que se repita
    int cont = 0;
    cout << "Se repite: ";
    for (int i = 0; i < size; i++)
    {
       for (int j = i+1; j < size; j++){
            if (arreglo1[i]==arreglo1[j])
            {
                cout << arreglo1[i] << " ";
                cont++;  
            }
        } 
    }
    cout << "\nSe repite : " << cont << " veces" << endl;
    
    // Suma de todos los items del arreglo
    int sumarr = 0;
    for (int i=0; i < size; i++)
    {
        sumarr = sumarr + arreglo1[i];
    }
    cout << "La suma es: " << sumarr << endl;

    // Ordenar de mayor a menor
    // Corregir **
    cout << "Ordenado de mayor a menor" << endl;
    int temp;
    for (int i = 0; i < size-1; i++)
    {
       for (int j = 0; j < size-i-1; j++){
            if (arreglo1[i]<arreglo1[i+1])
            {
                temp = arreglo1[j];
                arreglo1[j] = arreglo1[j+1];
                arreglo1[j+1] = temp; 
            }
        } 
    }

    for (int i = 0; i < size; i++)
    {
        cout << arreglo1[i] << " ";
    }

    return 0;
}
