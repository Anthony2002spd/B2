//Autor: Martha Paola Loor Andrade
#include <iostream>
using namespace std;
int main ()
{
	float MPLA_x,MPLA_s=0;
	int MPLA_i=0,MPLA_l;
	cout<<"Ingrese cantidad de egresos (l): ";cin>>MPLA_l;
	cout<<"Ingrese saldo inicial (s): ";cin>>MPLA_s;
	
	do{
	cout<<"Ingrese egreso(x): ";cin>>MPLA_x;
	MPLA_i=MPLA_i+1;
	MPLA_s=MPLA_s+MPLA_x;

	}while(MPLA_i<MPLA_l);
	cout<<"El saldo final es: "<<MPLA_s<<endl;
	return 0;
}
