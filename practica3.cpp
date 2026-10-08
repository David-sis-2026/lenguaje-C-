#include <iostream>
using namespace std;

int main (){
	//realice un programa que permita usar dos numeros para realizar las cuatro operaciones al mismo tiempo
	
	//definir variables
	int n1 ;
	int n2  ;
	int suma, resta, multiplicar, dividir ;
	//entrada 
	cout << "INGRESE EL PRIMER NUMERO " << endl;
	cin >> n1;
	cout << "INGRESE EL SEGUNDO NUMERO" <<endl;
	cin >> n2;
	//Proceso
	suma=n1+n2;
	resta=n1-n2;
	multiplicar=n1*n2;
	dividir=n1/n2;
	
	//Salida
	cout << " EL RESULTADO DE LA SUMA ES: " <<suma <<endl;
	cout << " EL RESULTADO DE LA RESTA ES: " <<resta <<endl;
	cout << " EL RESULTADO DE LA MULTIPLICACION ES: " <<multiplicar <<endl;
	cout << " EL RESULTADO DE LA DIVISION ES: " <<dividir <<endl;
	
	
	
	
	
	
	

return 0;
}