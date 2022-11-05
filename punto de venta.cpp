//Anthony_espinoza
#include <iostream>
using namespace std;
int main ()
{
	float TEAJ_x,TEAJ_s=0,TEAJ_vb,TEAJ_piva=12,TEAJ_viva,TEAJ_pdesc=10,TEAJ_vdesc,TEAJ_vn;
	int TEAJ_i=0,TEAJ_l;
	cout<<"Ingrese l: ";cin>>TEAJ_l;
	do{
		cout<<"Ingrese x: ";cin>>TEAJ_x;
		TEAJ_i=TEAJ_i+1;
		TEAJ_s=TEAJ_s+TEAJ_x;
	}while(TEAJ_i<TEAJ_l);
	TEAJ_vb=TEAJ_s;
	TEAJ_viva=TEAJ_vb*TEAJ_piva/100;
	TEAJ_vdesc=TEAJ_vb*TEAJ_pdesc/100;
	TEAJ_vn=TEAJ_vb+TEAJ_viva-TEAJ_vdesc;
	cout<<"El valor a pagar es de: "<<TEAJ_vn<<endl;
	return 0
  }
