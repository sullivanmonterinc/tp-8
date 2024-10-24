#include <iostream>
using namespace std;

float byteAkb(float a);
float teraByteAmb(float a);
float GigaByteAPetabyte(float a);
int opcion;


int main(){
	float x,R;
	cout<<"Ingrese la opcion que quiera realizar: "<<endl;
	cout<<"Opcion 1. Bytes a Kilobyte"<<endl;
	cout<<"Opcion 2. Terabyte a Megabyte"<<endl;
	cout<<"Opcion 3. Gigabyte a Petabyte"<<endl;
	cin>>opcion;
	
	switch(opcion){
		case 1:			
			cout<<"Ingrese el valor que quiere pasar de Byte a Kilobyte: ";
			cin>>x;
			R = byteAkb(x);
			
			cout<<"Resultado: "<<R<<endl;
			cin.get();
			break;
		case 2:			
			cout<<"Ingrese el valor que quiere pasar de Terabyte a Megabyte: ";
			cin>>x;
			R = teraByteAmb(x);

			
			cout<<"Resultado: "<<R<<endl;
			break;
		case 3:
			cout<<"Ingrese el valor que quiere pasar de Gigabyte a Petabyte: ";
			cin>>x;
			R = GigaByteAPetabyte(x);

			
			
			cout<<"Resultado: "<<R<<endl;
			break;
		default:
			cout<<"Opcion invalida."<<endl;
			break;
	}
	
	return 0;
	
}
float byteAkb(float a){
	return a/1024;
}
float teraByteAmb(float a){
	return a*1000000;
}
float GigaByteAPetabyte(float a){
	return a/1000;
}
