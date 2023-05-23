#include <iostream>
using namespace std;

int suma(int a, int b){ // Funcion que pide 2 numeros para sumar
    int c;
    c = a+b;
    return c;
}

int resta(int a, int b){ // Funcion que pide 2 numeros para restar
   int c;
    c = a-b;
    return c;
}
int division(int a, int b){ // Funcion que pide 2 numeros para dividir
    int c;
    c = a/b;
    return c;
}
int multiplicacion(int a, int b){ // Funcion que pide 2 numeros para multiplicar
    int c;
    c = a*b;
    return c;
}

int main(){
    int a,b;
    int select;
    cout << "Calculadora"<<endl;
    cout << "1. Suma 2. Resta 3. Multiplicacion 4. Division"<<endl;
    cin >> select;
    switch (select) // Segun lo insertado por el usuario realizar una accion
    {
    case 1:
        
        cout<<"Inserte 2 numeros "; cin >> a; cin >>b;
        cout << "La suma es:" << suma(a,b);  // Usando la funcion
        break;
    case 2:
        
        cout<<"Inserte 2 numeros "; cin >> a; cin >>b;
        cout << "La resta es:" << resta(a,b); // Usando la funcion
        break; 
    case 3:
        
        cout<<"Inserte 2 numeros "; cin >> a; cin >>b; 
        cout << "La multiplicacion es:" << multiplicacion(a,b); // Usando la funcion
        break;
    case 4:
        
        cout<<"Inserte 2 numeros "; cin >> a; cin >>b; 
        cout << "La division es:" << division(a,b); // Usando la funcion
        break;
    
    default:
        cout << "Opcion invalida";
        break;
    }
}
