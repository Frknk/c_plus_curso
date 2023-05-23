#include <iostream>

using namespace std;

class Vehiculo{
    protected:
    string cilindrada_motor, nro_asientos, nro_ruedas, nro_puertas, certificacion;

    public:
    Vehiculo(string _cilindrada_motor="", string _nro_asientos="", string _nro_ruedas="", string _nro_puertas="", string _certificacion=""){
        cilindrada_motor = _cilindrada_motor;
        nro_asientos = _nro_asientos;
        nro_ruedas = _nro_ruedas;
        nro_puertas = _nro_puertas;
        certificacion = _certificacion;
    }

    // Getters
    string getCilindrada_motor(){
        return cilindrada_motor;
    }

    string getNro_asientos(){
        return nro_asientos;
    }

    string getNro_ruedas(){
        return nro_ruedas;
    }

    string getNro_puertas(){
        return nro_puertas;
    }

    string getCertificacion(){
        return certificacion;
    }

    // Setters
    void setCilindrada_motor(string _cilindrada_motor){
        cilindrada_motor = _cilindrada_motor;
    }

    void setNro_asientos(string _nro_asientos){
        nro_asientos = _nro_asientos;
    }

    void setNro_ruedas(string _nro_ruedas){
        nro_ruedas = _nro_ruedas;
    }

    void setNro_puertas(string _nro_puertas){
        nro_puertas = _nro_puertas;
    }

    void setCertificacion(string _certificacion){
        certificacion = _certificacion;
    }

    
};