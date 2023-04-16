#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool puedeConsumir(char* rut, int servicio, string consumos_dia){
    fstream consumos;
    int saldo_servicio;
    string serv;
    bool consume;


    if (servicio == 0) {
        serv = DESAYUNO;
        //desp deberia poder acceder al campo del struct correspondiente aqi.. saldo_servicio =
    }

    else if (servicio == 1){
        serv = ALMUERZO;
        //desp deberia poder acceder al campo del struct correspondiente aqi..
    }

    else if (servicio == 2){
        serv = ONCE;
        //desp deberia poder acceder al campo del struct correspondiente aqi..
    }

    else if (servicio == 3){
        serv = CENA;
        //desp deberia poder acceder al campo del struct correspondiente aqi..
    }
    
    consumos.open(consumos_dia);
    if (!archivo.is_open()) {
        consumos.open(consumos_dia, ios::out);
        consumos.close();
    }

    consumos.open(consumos_dia, ios::in);
    string linea;
    int contador = 0;

    while (getline(consumos, linea)) {
        string rutt = linea.substr(0, 10);
        string serv = linea.substr(11);

        if (rut == rutt && servicio == serv) {
            contador++;
        }
    }

    saldo = saldo - contador

    if (saldo > 0){
        consume = true;
        consumos.close();

        consumos.open(consumos_dia, ios::app);
        consumos << rut << " " << servicio << endl;
    }

    else{
        consume = false;
    }

    consumos.close();
    return consume;
}

int main{
    return 0;
}