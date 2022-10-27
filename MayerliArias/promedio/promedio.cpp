#include <iostream>
using namespace std;
int main ()
{
	float MAAT_x,MAAT_pm=0;
	int MAAT_i=0,MAAT_l;
	cout<<"Ingrese l: ";cin>>MAAT_l;
	do{
	
	cout<<"Ingrese x: ";cin>>MAAT_x;
	MAAT_i=MAAT_i+1;
	if(MAAT_x>MAAT_pm){
		MAAT_pm=MAAT_x;
	}
	
	}while(MAAT_i<MAAT_l);
	cout<<"El promedio maximo del curso es: "<<MAAT_pm<<endl;
	return 0;
}