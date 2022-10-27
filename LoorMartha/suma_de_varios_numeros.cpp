//Autor: Martha Paola Loor Andrade
#include <iostream>
using namespace std;
int main() 
{
	float MPLA_x,MPLA_s=0.0;
	int MPLA_i=0,MPLA_l;
	cout<<"Ingrese el valor de l: ";cin>>MPLA_l;
	do{
		cout<<"Ingrese el valor de _x: ";cin>>MPLA_x;
		MPLA_i=MPLA_i+1;
		MPLA_s=MPLA_s+MPLA_x;

	}while(MPLA_i<MPLA_l);
	cout<<"La suma de los numeros es: "<<MPLA_s<<endl;
	return 0;
}
