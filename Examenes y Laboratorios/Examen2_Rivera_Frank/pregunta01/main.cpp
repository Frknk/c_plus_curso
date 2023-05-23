#include <iostream>
#include <fstream>
#include "restaurante.cpp"

using namespace std;

int main()
{

    // Creando restaurante
    Restaurante tiaveneno("Tia Veneno", "Av. La Marina 123", 5, 0, 0);

    // Creando platos
    PlatoDelDia vacio ("", 0, 0); // Por comodidad | Para que el array empieze en 0
    PlatoDelDia plato1("Ceviche", 15, 100);
    PlatoDelDia plato2("Arroz con pollo", 10, 100);
    PlatoDelDia plato3("Lomo saltado", 20, 100);
    PlatoDelDia plato4("Aji de gallina", 15, 100);
    PlatoDelDia plato5("Seco de cabrito", 25, 100);

    // Arreglo de platos
    PlatoDelDia platos[6] = {vacio, plato1, plato2, plato3, plato4, plato5};

    // Asignando platos
    tiaveneno.agregarPlatoDelDia(plato1);
    tiaveneno.agregarPlatoDelDia(plato2);
    tiaveneno.agregarPlatoDelDia(plato3);
    tiaveneno.agregarPlatoDelDia(plato4);
    tiaveneno.agregarPlatoDelDia(plato5);


    // Archivo txt
    ofstream reporte("reporte.txt");
    reporte << "Tia Veneno\n Reporte del dia: \n";
    reporte << tiaveneno.stringInfo() + "\n";

    // Creando menu
    int opcion; // Opcion del menu

    // Variables para el menu
    string nombre_cliente;
    int nro_plato;
    int cantidad;

    // Menu
    do
    {
        // Imprimiendo informacion
        tiaveneno.mostrarInfo();

        // Imprimiendo menu
        cout << "Registrar venta por: " << endl;
        cout << "1. Delivery" << endl;
        cout << "2. Mesa" << endl;
        cout << "3. Imprimir reporte y salir" << endl;

        // Leyendo opcion
        cout << "Ingrese opcion: ";
        cin >> opcion;

        // Validando opcion
        switch (opcion)
        {

        // Caso delivery
        case 1:
            cout << "Ingrese nombre de cliente: ";
            cin >> nombre_cliente;
            cout << "Ingrese nro de plato: ";
            cin >> nro_plato;
            // Si el numero ingresado no existe
            if (nro_plato > 5)
            {
                cout << "Plato no existente";
                break;
            }
            cout << "Ingrese cantidad de platos a ordenar: ";
            cin >> cantidad;

            try // Registrar
            {
                platos[nro_plato].comprarPlatos(cantidad); // Descontar de la cantidad de platos
                tiaveneno.agregarGanancia(platos[nro_plato].getPrecioPlato() * cantidad); // Registrar ganacia 
                tiaveneno.agregarVentaDelivery(cantidad);
                reporte << "[Delivery] Compra hecha por " + nombre_cliente + "\n"; // Registrando en txt
                reporte << "Pago: " + to_string(platos[nro_plato].getPrecioPlato() * cantidad) + "\n";
                reporte <<  platos[nro_plato].getNombrePlato() + " | Cantidad: " + to_string(cantidad) + "\n\n"; // Registrando en txt
                cout << "Todo completado! Registrando orden..." << endl;
                break; // Terminar loop
            }
            catch(const std::exception& e) // Manejar error
            {
                std::cerr << e.what() << '\n'; // Imprimir error
                break;
            }
        // Caso Mesa
        case 2:
            cout << "Ingrese nombre de cliente: ";
            cin >> nombre_cliente;
            cout << "Ingrese nro de plato: ";
            cin >> nro_plato;
            // Si el numero ingresado no existe
            if (nro_plato > 5)
            {
                cout << "Plato no existente";
                break;
            }
            cout << "Ingrese cantidad de platos a ordenar: ";
            cin >> cantidad;

            try // Registrar
            {
                platos[nro_plato].comprarPlatos(cantidad); // Descontar de la cantidad de platos
                tiaveneno.agregarGanancia(platos[nro_plato].getPrecioPlato() * cantidad); // Registrar ganacia 
                tiaveneno.agregarVentaDeMesa(cantidad);
                reporte << "[Mesa] Compra hecha por " + nombre_cliente + "\n"; // Registrando en txt
                reporte << "Pago: " + to_string(platos[nro_plato].getPrecioPlato() * cantidad) + "\n";
                reporte <<  platos[nro_plato].getNombrePlato() + " | Cantidad: " + to_string(cantidad) + "\n\n"; // Registrando en txt
                cout << "Todo completado! Registrando orden..." << endl;
                break; // Terminar loop
            }
            catch(const std::exception& e) // Manejar error
            {
                std::cerr << e.what() << '\n'; // Imprimir error
                break;
            }
        case 3:
            cout << "Imprimiendo reporte!";
            break;
        default:
            cout << "Opcion incorrecta";
            break;
        }

    } while (opcion != 3); // Terminar loop al 3
    reporte << "\n" + tiaveneno.stringInfoVentas();
    reporte.close();
    return 0;
}