/*
Escriba un programa que simule el juego de adivinar un número. El programa deberá generar 
un  número  aleatorio  entre  1  y  100 ypedirleal  usuario  que  adivine  cuál  es.  
Si  el usuario ingresa un número incorrecto, el programa deberá indicarle si el número a 
adivinar es  mayor  o  menor  al  que  ingresó.  El  juego  termina  cuando  el  usuario  
adivina  el  número correcto.
*/

#include <iostream>
using namespace std;

int main(){
    int numero, numero_aleatorio; // Declarando variables
    numero_aleatorio = rand() % 100 + 1; // Generando numero aleatorio del 1 al 100

    cout << "*** Juego de adivinar el numero ***" << endl; // Imprimiendo titulo
    // Bucle hasta adivinar el numero
    do
    {
        // Pidiendo datos
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(numero > numero_aleatorio){
            cout << "El numero es menor..." << endl; // Imprimiendo si es mayor
        }
        else if(numero < numero_aleatorio){
            cout << "El numero es mayor..." << endl; // Imprimiendo si es menor
        }
        else{ // Si no ocurre ninguna de las anteriores es porque adivino
            cout << "Felicidades, adivinaste el numero!" << endl; // Imprimiendo si es igual
        }
    } while (numero != numero_aleatorio); // Cuando adivine acabar el bucle
    
}
