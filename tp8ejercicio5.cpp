#include <iostream>
#include <string>
using namespace std;

bool esAnagrama(string cadena1, string cadena2);
void contarLetras(string cadena, int conteo[]);

int main(){
	string cadena1;
	string cadena2;
	bool Anagrama;
	
	cout<<"Ingrese la primera cadena: ";
    getline(cin, cadena1);
    
    cout<<"Ingrese la segunda cadena: ";
    getline(cin, cadena2);
    
    Anagrama = esAnagrama(cadena1, cadena2);
    
    if(Anagrama){
    	cout<<"Se encontro un anagrama."<<endl;
	}
	else
	{
		cout<<"No se encontro un anagrama."<<endl;
    }
    
    return 0;
}

bool esAnagrama(string cadena1, string cadena2) {
     int conteo1[26] = {0};
     int conteo2[26] = {0};
     
     contarLetras(cadena1, conteo1);
     contarLetras(cadena2, conteo2);
     
     for(int i = 0; i < 26; i++){
     	if(conteo1[i] != conteo2[i]){
     		return false;
		 }
	 }
	 return true;
}
void contarLetras(string cadena, int conteo[]) {
    for (int i = 0; i < cadena.length(); i++) {
        char c = cadena[i];

        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A');
        }

        if (c >= 'a' && c <= 'z') {
            conteo[c - 'a']++;
        }
    }
}

