#include <string>
#include "plato_del_dia.cpp"

using namespace std;

class Restaurante : public PlatoDelDia
{
    // Atributos
protected:
    string nombre, direccion;
    int ventas_delivery, ventas_mesa, ganancias = 0, menu_del_dia = 0;
    PlatoDelDia plato_del_dia[5];

public:
    // Constructor
    Restaurante(string _nombre, string _direccion, int _menu_del_dia, int _ventas_delivery, int _ventas_mesa)
    {
        nombre = _nombre;
        direccion = _direccion;
        menu_del_dia = 0;
        ventas_delivery = _ventas_delivery;
        ventas_mesa = _ventas_mesa;
    }

    // Getters
    string getNombre()
    {
        return nombre;
    }

    string getDireccion()
    {
        return direccion;
    }

    int getMenuDelDia()
    {
        return menu_del_dia;
    }

    int getVentasDelivery()
    {
        return ventas_delivery;
    }

    int getVentasMesa()
    {
        return ventas_mesa;
    }

    // Setters
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    void setDireccion(string _direccion)
    {
        direccion = _direccion;
    }

    void setMenuDelDia(int _menu_del_dia)
    {
        menu_del_dia = _menu_del_dia;
    }

    void setVentasDelivery(int _ventas_delivery)
    {
        ventas_delivery = _ventas_delivery;
    }

    void setVentasMesa(int _ventas_mesa)
    {
        ventas_mesa = _ventas_mesa;
    }

    // Metodos
    void agregarVentaDelivery(int _ventas_delivery){
        ventas_delivery = ventas_delivery + _ventas_delivery;
    }

    void agregarVentaDeMesa(int _ventas_mesa){
        ventas_mesa = ventas_mesa + _ventas_mesa ;
    }


    void agregarPlatoDelDia(PlatoDelDia _plato_del_dia)
    {
        if (menu_del_dia < 5)
        {
            plato_del_dia[menu_del_dia] = _plato_del_dia;
            menu_del_dia++;
        }

        else
        {
            cout << "No se puede agregar mas platos del dia" << endl;
        }
    }

    void mostrarInfo()
    {
        
        cout << ".- Restaurante " << nombre << endl;
        cout << ".- Direccion " << direccion << endl;
        cout << ".- Menu del dia :" << endl;
        if (sizeof(plato_del_dia) / sizeof(plato_del_dia[0]) != 0)
        {
            for (int i = 0; i < 5; i++)
            {
                cout << ".- " << plato_del_dia[i].datosString() << endl;
            }
        }
        else
        {
            cout << "No se registraron platos ..........." << endl;
        }
    }

    string stringInfo()
    {
        string info;
        for (int i = 0; i < 5; i++)
        {
            info = info + ".- " + plato_del_dia[i].datosString() + "\n";
        }
        return info;
    }

    void agregarGanancia(int agrego){
        ganancias = ganancias + agrego;
    }

    string stringInfoVentas()
    {
        string info;
        info = info + ".- Ventas Delivery: " + to_string(ventas_delivery) + "\n";
        info = info + ".- Ventas Mesa: " + to_string(ventas_mesa) + "\n";
        info = info + ".- Ganancias: " + to_string(ganancias) + "\n";
        return info;
    }

    
};