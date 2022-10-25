//Autor: Martha Paola Loor Andrade
#include <iostream>
using namespace std;
int main ()
{
	float MPLA_x,MPLA_s=0,MPLA_vb,MPLA_piva=12,MPLA_viva,MPLA_pdesc=10,MPLA_vdesc,MPLA_vn;
	int MPLA_i=0,MPLA_l;
	cout<<"Ingrese l: ";cin>>MPLA_l;
	do{
		cout<<"Ingrese x: ";cin>>MPLA_x;
		MPLA_i=MPLA_i+1;
		MPLA_s=MPLA_s+MPLA_x;
	}while(MPLA_i<MPLA_l);
	MPLA_vb=MPLA_s;
	MPLA_viva=MPLA_vb*MPLA_piva/100;
	MPLA_vdesc=MPLA_vb*MPLA_pdesc/100;
	MPLA_vn=MPLA_vb+MPLA_viva-MPLA_vdesc;
	cout<<"El valor a pagar es de: "<<MPLA_vn<<endl;
	return 0;
}
