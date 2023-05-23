/*
Escribir un programa que implemente una pila y una cola utilizando una lista enlazada y 
realice algunas operaciones básicas con ellas (por ejemplo, push, pop, etc.).
a. cuales es la estrategia de una pila
b. cual es la estrategia de una cola
c. cree una pila con valores ingresados por el usuario, el tamaño de la pila 
deber ser como mínimo 10
d. mostrar el contenido de la pila
*/

/*
La estrategia en las pilas es el:
    LIFO (Last In First Out)
    Primero elemento en entrar, ultimo elemento en salir

La estrategia en las colas es el:
    FIFO (First In First Out)
    Primero elemento en entrar, primer elemento en salir
*/

#include <iostream>

using namespace std;

// Declarando estructura
struct pila{
    int dato;
    pila *siguiente;
};

pila *pila1 = NULL; // Declarando pila

// Declarando funciones

void push(pila *&, int n){ // Funcion para ingresar datos a la pila
    pila *nuevo_nodo = new pila(); // Creando nuevo nodo
    nuevo_nodo->dato = n; // Asignando valor al nodo
    nuevo_nodo->siguiente = pila1; 
    pila1 = nuevo_nodo; // Asignando valor al nodo
    cout << "\tElemento " << n << " agregado a la pila correctamente" << endl;
} 
void pop(pila *&, int &n){ // Funcion para eliminar datos de la pila
    pila *aux = pila1; // Creando nodo auxiliar
    n = aux->dato; // Asignando valor al nodo
    pila1 = aux->siguiente;
    delete aux; // Eliminando nodo auxiliar
    cout << "\tElemento " << n << " eliminado de la pila correctamente" << endl;
} 
void mostrar(pila *){ // Funcion para mostrar la pila
    pila *actual = new pila();
    actual = pila1 ; // Asignando valor de nuestra pila a mostrar
    while (actual != NULL) // Mientras que no este vacia la pila
    {
        cout << actual->dato << ", "; // Mostrando datos
        actual = actual->siguiente; // Actualizando a siguiente valor de la pila
    }
}

int main(){
    
    int dato; // Declarando variable

    // Funcion para ingresar datos a la pila
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: "; // Pidiendo datos
        cin >> dato; // Pidiendo datos
        push(pila1, dato); // Llamando funcion
    }

    // Funcion para mostrar la pila
    cout << "Mostrando pila: ";
    mostrar(pila1); // Llamando funcion
    cout << endl;

    // Funcion para eliminar datos de la pila
    for (int i = 0; i < 10; i++)
    {
        pop(pila1, dato); // Llamando funcion
    }
}