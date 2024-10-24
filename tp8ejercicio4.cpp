#include <iostream>
#include <string>
using namespace std;

bool encontrarPalabra(const string &cadena, const string &palabra);

int main(){
    string cadena;
    string palabra;
    bool encontrada;

    cout<<"Ingrese una cadena de palabras: ";
    getline(cin, cadena);
    cout<<"Ingrese la palabra a buscar: ";
    getline(cin, palabra);

    encontrada = encontrarPalabra(cadena, palabra);

    if(encontrada){
        cout<<"La palabra '"<<palabra<<"' se encontro en la cadena."<<endl;
    } else {
        cout<<"La palabra '"<<palabra<<"' no se encontro en la cadena."<<endl;
    }

    return 0;
}

bool encontrarPalabra(const string &cadena, const string &palabra) {
    size_t posicion = cadena.find(palabra);
    
    return (posicion != string::npos);
}


