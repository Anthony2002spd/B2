#include <iostream>
using namespace std;
int main () 
{
	float MAAT_imc,MAAT_peso,MAAT_altura;
	cout<<"Ingrese el peso (kg): ";cin>>MAAT_peso;
	cout<<"Ingrese la altura (metros): ";cin>>MAAT_altura;
	MAAT_imc=MAAT_peso/(MAAT_altura*MAAT_altura);
	if(MAAT_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(MAAT_imc>=18.5 && MAAT_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(MAAT_imc>=25 && MAAT_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(MAAT_imc>=27 && MAAT_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(MAAT_imc>=30 && MAAT_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(MAAT_imc>=35 && MAAT_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(MAAT_imc>=40 && MAAT_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(MAAT_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}