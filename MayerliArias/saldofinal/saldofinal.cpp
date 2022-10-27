#include <iostream>
using namespace std;
int main ()
{
	float MAAT_x,MAAT_s=0;
	int MAAT_i=0,MAAT_l;
	cout<<"Ingrese numero de egresos  ";cin>>MAAT_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>MAAT_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>MAAT_x;
	MAAT_i=MAAT_i+1;
	MAAT_s=MAAT_s-MAAT_x;

	}while(MAAT_i<MAAT_l);
	cout<<"El saldo final es: "<<MAAT_s<<endl;
	return 0;
}