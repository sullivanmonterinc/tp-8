#include <iostream>
#include <string>
using namespace std;

int contarPalabras(string a);


int main(){
	
	int R;
	string x;
	cout<<"Ingrese una palabra que quiera saber su longitud: ";
	getline(cin, x);
	
	R = contarPalabras(x);
	cout<<"Resultado: "<<R<<endl;
	return 0;
}

int contarPalabras(string a) {
	int palabras = 0;
	bool enPalabra = false;
	
	    for (int i = 0; i < a.length(); i++) {
        if (a[i] != ' ' && !enPalabra) {
            enPalabra = true;
            palabras++;
        } else if (a[i] == ' ') {
            enPalabra = false;
        }
    }
    
    return palabras;
	
	
	
}



