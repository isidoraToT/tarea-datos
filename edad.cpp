//escribir un archivo que guarde el nombre el apellido y la edad.

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main(){
//declaracion de variables
string texto, linea, nombre, apellido, edad, salida = "";
//archivo
ifstream prueba;
prueba.open("borrador.txt");
if(!prueba.is_open()){

    prueba.open("borrador.txt",ios::out);
    prueba.close();
//con esto se supone que nos aseguramos que haya un documento asi este vacio para poderlo modificar después.
}
else{
prueba.open("borrador.txt",ios::in);

    while(getline(prueba,linea)){

    texto = texto + linea + "\n";
}
prueba.close();

//ahora abrimos el documento otra vez para agregarle los datos que queremos.
prueba.open("borrador.txt", ios::out);
//colocamos el texto que habia en el documento antes de que se eliminara en este.
prueba << texto <<endl;
//ahora hacemos un bucle para ingresar todas las lineas que desee el colaborador.
while(salida != "SALIR"){

cout<<"Ingrese su nombre: ";cin>>nombre;
cout<<"Ingrese su apellido: ";cin>>apellido;
cout<<"Ingrese su edad: ";cin>>edad;
//ahora ingresamos las variables en el documento.
prueba << nombre <<", "<< apellido <<", "<< edad << "\n";

cout<<"Si desea dejar de ingresar datos, ingrese 'SALIR', de lo contrario ingrese cualquier caracter.";

}
prueba.close();

}

}

    return 0;
}
