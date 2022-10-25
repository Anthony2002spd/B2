//Autor: Martha Paola Loor Andrade
#include <iostream>
using namespace std;
int main ()
{
	float MPLA_x,MPLA_s=0,MPLA_s1=0,MPLA_s5=0;
	int MPLA_i=0,MPLA_l,MPLA_i1=0,MPLA_i5=0;
	cout<<"Ingrese l: ";cin>>MPLA_l;
	do{

	cout<<"Ingrese x: ";cin>>MPLA_x;
	MPLA_i=MPLA_i+1;
	MPLA_s=MPLA_s+MPLA_x;
	if(MPLA_x==1){
		MPLA_i1=MPLA_i1+1;
		MPLA_s1=MPLA_s1+MPLA_x;
	}else{

		MPLA_i5=MPLA_i5+1;
		MPLA_s5=MPLA_s5+MPLA_x;
	}

	}while(MPLA_i<MPLA_l);
	cout<<"La cantidad de monedas es: "<<MPLA_i<<endl;
	cout<<"El valor es: "<<MPLA_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<MPLA_i1<<endl;
	cout<<"El valor es: "<<MPLA_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<MPLA_i5<<endl;
	cout<<"La cantidad de moneda es: "<<MPLA_s5<<endl;
	return 0;
}
