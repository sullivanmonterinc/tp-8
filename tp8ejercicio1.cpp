#include <iostream>
using namespace std;


int calculo;

int suma(int a,int b);
int resta(int a,int b);
int multiplicacion(int a,int b);
int division(int a,int b);

int main(){
	int x,y,R;
	cout<<"Ingresar el primer numero: ";cin>>x;
	cout<<"Ingresar el segundo numero: ";cin>>y;
	
	cout<<"Elija el tipo de calculo que quiera hacer: "<<endl;
	cout<<"Opcion 1. Suma"<<endl;
	cout<<"Opcion 2. Resta"<<endl;
	cout<<"Opcion 3. Multiplicacion"<<endl;
	cout<<"Opcion 4. Division"<<endl;
	cin>>calculo;
	
	switch(calculo){
		case 1:
			R = suma(x,y);
			cout<<"Resultado: "<<R<<endl;
			cin.get();
			break;
		case 2:
			R = resta(x,y);
			cout<<"Resultado: "<<R<<endl;
			cin.get();
			break;
		case 3:
			R = multiplicacion(x,y);
			cout<<"Resultado: "<<R<<endl;
			cin.get();
			break;
		case 4:
			R = division(x,y);
			cout<<"Resultado: "<<R<<endl;
			cin.get();
			break;
			
	}
	
	
	return 0;
}
		int suma(int a, int b){
        return a+b;
        }
    	int resta(int a, int b){
    	return a-b;
		}
		int multiplicacion(int a, int b){
		return a*b;
		}
		int division(int a, int b){
		return a/b;
		}
