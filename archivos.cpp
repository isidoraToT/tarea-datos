//prueba con archivos
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

string datos,texto_completo;

fstream prueba;
//declaracion de variables
string nombre, apellido, edad, salida;
//datos solicitados al usuario
    while(salida != "SALIR"){

    cout<<"Ingrese su nombre ";cin>>nombre;
    cout<<"Ingrese su apellido ";cin>>apellido;
    cout<<"Ingrese su edad";cin>>edad;
    cout<<"Si quiere dejar de ingresar datos, escriba 'SALIR', de lo contrario escriba cualquier caracter."<<endl; 
    cin>>salida;

    prueba.open("borrador.txt");
    if(!prueba.is_open()){

    prueba.open("borrador.txt",ios::out);
    prueba.close()
    }
    else{

    prueba.open("borrador.txt",ios::in);
    //haremos un while para guardar todo el contenido del documento en una variable y depues abriremos otra vez el documento para ahora escribir
    //los datos que necesitamos ingresar al documento.
    while(open)



}

}
} else{

cout<<"El programa ha concluido "<<endl;

}

    return 0;
}