//Anthony_espinoza
#include <iostream>
using namespace std;
int main ()
{
	float TEAJ_x,TEAJ_s=0,TEAJ_s1=0,TEAJ_s5=0;
	int TEAJ_i=0,TEAJ_l,TEAJ_i1=0,TEAJ_i5=0;
	cout<<"Ingrese l: ";cin>>TEAJ_l;
	do{

	cout<<"Ingrese x: ";cin>>TEAJ_x;
	TEAJ_i=TEAJ_i+1;
	TEAJ_s=TEAJ_s+TEAJ_x;
	if(TEAJ_x==1){
		TEAJ_i1=TEAJ_i1+1;
		TEAJ_s1=TEAJ_s1+TEAJ_x;
	}else{

		TEAJ_i5=TEAJ_i5+1;
		TEAJ_s5=TEAJ_s5+TEAJ_x;
	}

	}while(TEAJ_i<TEAJ_l);
	cout<<"La cantidad de monedas es: "<<TEAJ_i<<endl;
	cout<<"El valor es: "<<TEAJ_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<TEAJ_i1<<endl;
	cout<<"El valor es: "<<TEAJ_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<TEAJ_i5<<endl;
	cout<<"La cantidad de moneda es: "<<TEAJ_s5<<endl;
	return 0;
}
