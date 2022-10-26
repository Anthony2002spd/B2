//Anthony_espinoza
#include <iostream>
using namespace std;
int main () 
{
	float TEAJ_imc,TEAJ_peso,TEAJ_altura;
	cout<<"Ingrese el peso (kg): ";cin>>TEAJ_peso;
	cout<<"Ingrese la altura (metros): ";cin>>TEAJ_altura;
	TEAJ_imc=TEAJ_peso/(TEAJ_altura*TEAJ_altura)
		;
	if(TEAJ_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(TEAJ_imc>=18.5 && TEAJ_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(TEAJ_imc>=25 && TEAJ_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(TEAJ_imc>=27 && TEAJ_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(TEAJ_imc>=30 && TEAJ_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(TEAJ_imc>=35 &&TEAJ_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(TEAJ_imc>=40 && TEAJ_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(TEAJ_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}
