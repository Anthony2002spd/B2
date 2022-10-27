//Autor: Martha Paola Loor Andrade
#include <iostream>
using namespace std;
int main () 
{
	float MPLA_imc,MPLA_peso,MPLA_altura;
	cout<<"Ingrese el peso (kg): ";cin>>MPLA_peso;
	cout<<"Ingrese la altura (metros): ";cin>>MPLA_altura;
	MPLA_imc=MPLA_peso/(MPLA_altura*MPLA_altura)
		;
	if(MPLA_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(MPLA_imc>=18.5 && MPLA_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(MPLA_imc>=25 && MPLA_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(MPLA_imc>=27 && MPLA_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(MPLA_imc>=30 && MPLA_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(MPLA_imc>=35 && MPLA_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(MPLA_imc>=40 && MPLA_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(MPLA_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}

