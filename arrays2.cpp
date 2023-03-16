#include <iostream>
using namespace std;

int main(){
    int arreglo1[6] = {1,2,3,4,6,6};
    // Recorre el arreglo
    for (int i = 0; i < sizeof(arreglo1)/sizeof(arreglo1[0]); i++)
    {
        cout << arreglo1[i] << endl;
    }
    
    // Busca el menor
    int menor = arreglo1[0];
    for (int i = 1; i < sizeof(arreglo1)/sizeof(arreglo1[0]); i++)
    {
        if (arreglo1[i]<menor)
        {
            menor = arreglo1[i];
        }
        
    }
    cout << "El numero menor es: " << menor << endl;

    // Busca el mayor
    int mayor = arreglo1[0];
    for (int i = i; i < sizeof(arreglo1)/sizeof(arreglo1[0]); i++)
    {
        if (arreglo1[i]>mayor)
        {
            mayor = arreglo1[i];
        }
    }
    cout << "El numero mayor es: " << mayor << endl;

    // Buscar el numero que se repite
    int repite = arreglo1[0];
    // Doble recorrido para buscar un elemento que se repita
    for (int i = 1; i < sizeof(arreglo1)/sizeof(arreglo1[0]); i++)
    {
       for (int j=i+1; j <sizeof(arreglo1)/sizeof(arreglo1[0]); j++){
            if (arreglo1[i]==arreglo1[j])
            {
                repite = arreglo1[i];
            }
        } 
    }
    cout << "El elemento que se repite es: " << repite;
    


    return 0;
}
