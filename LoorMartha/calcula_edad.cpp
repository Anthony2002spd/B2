//Autor: Martha Paola Loor Andrade
#include <iostream>
using namespace std;
int main ()
{
	int MPLA_aa,MPLA_ma,MPLA_da,MPLA_an,MPLA_mn,MPLA_dn,MPLA_a,MPLA_m,MPLA_d;
	cout<<"Ingrese la fecha actual :";cin>>MPLA_aa>>MPLA_ma>>MPLA_da;
	cout<<"Ingrese la fecha de nacimiento: ";cin>>MPLA_an>>MPLA_mn>>MPLA_dn;

      	if(MPLA_da>MPLA_dn){

		MPLA_d=MPLA_da-MPLA_dn;

	}else{
		MPLA_da=MPLA_da+30;
		MPLA_ma=MPLA_ma-1;
		MPLA_d=MPLA_da-MPLA_dn;
	}

      	if(MPLA_ma>MPLA_mn){
	
		MPLA_m=MPLA_ma-MPLA_mn;

	}else{

		MPLA_ma=MPLA_ma+12;
		MPLA_aa=MPLA_aa-1;
		MPLA_m=MPLA_ma-MPLA_mn;
	}
                MPLA_a=MPLA_aa-MPLA_an;

	cout<<"Usted tiene "<<MPLA_a<<" años, "<<MPLA_m<<" meses,"<<MPLA_d<<" dias"<<endl;
	return 0;
	
}
