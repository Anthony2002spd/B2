#include<iostream>
using namespace std;

int main () {
    float MAAT_x,MAAT_s=0.0;
    int MAAT_i=0, MAAT_l;
    cout<<"Ingrese el valor de MAAT_l: ";
    cin>>MAAT_l;
    do{
        cout<<"Ingrese el valor de MAAT_x: ";
        cin>>MAAT_x;
        MAAT_i=MAAT_i+1;
        MAAT_s=MAAT_s+MAAT_x;
    }while(MAAT_i<MAAT_l);

    cout <<"La suma de los numeros fue: "<<MAAT_s<<endl;
    return 0;

}