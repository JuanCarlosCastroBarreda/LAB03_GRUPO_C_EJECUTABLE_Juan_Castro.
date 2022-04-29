#include <iostream>
#include <string>

using namespace std;

int main(){
    int numero,exponente,resultado=1;
    cout<<"ingrese un numero: "<<endl;
    cin >> numero;
    cout<<"ingrese su exponente: "<<endl;
    cin >> exponente;

    for (int i=0;i<exponente;i++){
        resultado=resultado*numero;
    }
    cout<<numero<<" elevado a "<<exponente<<" es:\n"<<resultado;

}