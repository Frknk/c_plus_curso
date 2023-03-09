#include <iostream>
#include <string>

using namespace std;

int main(){

    /*
    Arrays o Vectores
    Formato de array:
    tipo_de_array nombre_array[tamano] = {item1, item2}
    */

    int numeros_array[5] = {1,2,3};
    char letras_array[5];
    float decimal_array[5];
    bool booleano_array[5];
    string string_array[5] = {"Juan", "Jose", "Luis"};

    // Imprimir todo un array
    // Forma compleja i<sizeof(string_array)/sizeof(string_array[0])
    for (int i = 0; i<5; i++)
    {
        cout << string_array[i] << endl;
    }
    int tamanio = sizeof(string_array); // Tamano de un array
    int tamanio2 = sizeof(string_array)/sizeof(string_array[0]); // Obtener correcto
    cout << tamanio2 << endl;

    string array_reemplazo[5] = {"Objeto1", "Objeto2", "Objeto3", "Objeto4", "Objeto5"};
    cout << "Original array"<<endl;
    for (int i = 0; i<sizeof(array_reemplazo)/sizeof(array_reemplazo[0]); i++)
    {
        cout << array_reemplazo[i] << endl;
    }
    array_reemplazo[2] = "Computadora";
    cout << "Array reemplazado"<<endl;
    for (int i = 0; i<sizeof(array_reemplazo)/sizeof(array_reemplazo[0]); i++)
    {
        cout << array_reemplazo[i] << endl;
    }



    return 0;
}
