#include <iostream>
using namespace std;
int main ()
{
	float MAAT_x,MAAT_s=0,MAAT_s1=0,MAAT_s5=0;
	int MAAT_i=0,MAAT_l,MAAT_i1=0,MAAT_i5=0;
	cout<<"Ingrese l: ";cin>>MAAT_l;
	do{

	cout<<"Ingrese x: ";cin>>MAAT_x;
	MAAT_i=MAAT_i+1;
	MAAT_s=MAAT_s+MAAT_x;
	if(MAAT_x==1){
		MAAT_i1=MAAT_i1+1;
		MAAT_s1=MAAT_s1+MAAT_x;
	}else{

		MAAT_i5=MAAT_i5+1;
		MAAT_s5=MAAT_s5+MAAT_x;
	}

	}while(MAAT_i<MAAT_l);
	cout<<"La cantidad de monedas es: "<<MAAT_i<<endl;
	cout<<"El valor es: "<<MAAT_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<MAAT_i1<<endl;
	cout<<"El valor es: "<<MAAT_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<MAAT_i5<<endl;
	cout<<"La cantidad de moneda es: "<<MAAT_s5<<endl;
	return 0;
}