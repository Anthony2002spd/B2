//Autor: Martha Paola Loor Andrade
#include <iostream>
using namespace std;
int main ()
{
	float MPLA_x,MPLA_pm=0;
	int MPLA_i=0,MPLA_l;
	cout<<"Ingrese l: ";cin>>MPLA_l;
	do{
	
	cout<<"Ingrese x: ";cin>>MPLA_x;
	MPLA_i=MPLA_i+1;
	if(MPLA_x>MPLA_pm){
		MPLA_pm=MPLA_x;
	}
	
	}while(MPLA_i<MPLA_l);
	cout<<"El promedio maximo del curso es: "<<MPLA_pm<<endl;
	return 0;
}
