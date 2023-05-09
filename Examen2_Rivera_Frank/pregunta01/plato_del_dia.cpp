#include <string>

using namespace std;

class PlatoDelDia
{
    // Atributos
protected:
    string nombre_plato;
    int cantidad_platos, precio_plato;

public:
    // Constructor
    PlatoDelDia(string _nombre_plato = "", int _precio_plato = 0, int _cantidad_platos = 0)
    {
        nombre_plato = _nombre_plato;
        precio_plato = _precio_plato;
        cantidad_platos = _cantidad_platos;
    }

    // Getters
    string getNombrePlato()
    {
        return nombre_plato;
    }

    int getPrecioPlato()
    {
        return precio_plato;
    }

    int getCantidadPlatos()
    {
        return cantidad_platos;
    }

    // Setters
    void setNombrePlato(string _nombre_plato)
    {
        nombre_plato = _nombre_plato;
    }

    void setPrecioPlato(int _precio_plato)
    {
        precio_plato = _precio_plato;
    }

    void setCantidadPlatos(int _cantidad_platos)
    {
        cantidad_platos = _cantidad_platos;
    }

    // Metodos
    void comprarPlatos(int _cantidad_platos)
    {
        if (cantidad_platos >= _cantidad_platos)
        {
            cantidad_platos -= _cantidad_platos;
        }
        else
        {
            cout << "No hay suficientes platos" << endl;
        }
    }

    string datosString()
    {
        string descripcion = nombre_plato + " , Precio: " + to_string(precio_plato) + " , Cantidad: " + to_string(cantidad_platos);
        return descripcion;
    }
};