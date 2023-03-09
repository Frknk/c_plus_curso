#include <iostream>
using namespace std;

/*
Formato de puntero :
tipo-dato *nombre_puntero
Direccion de puntero :
*nombre_puntero &nombre_variable
*/

// Funcion para el ejercicio 2
bool es_primo(int n){
    if (n <= 1){  // Numeros menores a 1 no son primos
        return false;
    }

    for(int i = 2; i < n; i++){ // Comprobar si hay divisor entre 2 y el numero - 1
        if (n%1 == 0){
            return false; // Si se encuentra divisor no es primo
        }
    }
    return true; // Si no se encuentra divisor es primo
}

int main(){

    /*
    Primer ejercicio determinar si un numero es impar o par e imprimir su direccion en memoria
    */

   int numero;
   cout << "Primer Ejercicio" << endl;
   cout << "Inserte un numero: "; cin >> numero;
   int *direccion_numero = &numero; // Asignar direccion
   if (numero%2 == 1){ // Usar mod para ver si queda residuos dividiendolo entre 2
        cout << "El numero es impar" << endl;; // Hay residuo es impar
        cout << "Puntero:" << direccion_numero << endl;
    }
    cout << "El numero es par" << endl;; // No hay residuo es par
    cout << "Puntero:" << direccion_numero << endl;

    /*
    Segundo ejercicio determinar si un numero es primo e imprimir su direccion en memoria
    */
   int numero2;
   cout << "Segundo Ejercicio" << endl;
   cout << "Inserte un numero: "; cin >> numero2;
   int *direccion_numero2 = &numero2; // Asignar direccion
   es_primo(numero2);
   if (numero2 == false){
        cout << "El numero no es primo" << endl;
        cout << "Puntero: " << direccion_numero2 << endl;
    }
    cout << "El numero es primo" << endl;
    cout << "Puntero: " << direccion_numero2 << endl; 

    /*
    Tercer ejercicio reemplazar el valor del ejercicio anterior con el valor 53 a traves de puntero
    */
    cout << "Tercer Ejercicio" << endl;
    cout << "Valor original: " << numero2 << endl;
    int *nuevo_valor = &numero2; // Designar la direccion del valor
    *nuevo_valor = 53; // Asignar nuevo valor
    cout << "El nuevo valor es: " << numero2;    

    return 0;
}
