#include "vehiculo.cpp"

using namespace std;

class Movilidad : public Vehiculo{
    protected:
    string color, marca, tipo;

    public:
    Movilidad(string _cilindrada_motor, string _nro_asientos, string _nro_ruedas, string _nro_puertas, string _certificacion, string _color, string _marca, string _tipo) : Vehiculo(_cilindrada_motor, _nro_asientos, _nro_ruedas, _nro_puertas, _certificacion){
        color = _color;
        marca = _marca;
        tipo = _tipo;
    }

    // Getters
    string getColor(){
        return color;
    }

    string getMarca(){
        return marca;
    }

    string getTipo(){
        return tipo;
    }

    // Setters
    void setColor(string _color){
        color = _color;
    }

    void setMarca(string _marca){
        marca = _marca;
    }

    void setTipo(string _tipo){
        tipo = _tipo;
    }

    // Metodos
    string getDatos(){
        string datos = "Cilindrada motor: " + cilindrada_motor + "| Nro asientos: " + nro_asientos + "| Nro ruedas: " + nro_ruedas + "| Nro puertas: " + nro_puertas + "| Certificacion: " + certificacion + "| Color: " + color + "| Marca: " + marca;
        return datos;
    }

};