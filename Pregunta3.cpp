#include <iostream>
#include <string>

using namespace std;


int main() {
    int annio_nacimiento,annio_actual,edad,mes_nac,mes_act,dia_nac,dia_act,mes,dias;

    cout<<"Ingrese su anno de nacimiento: ";
    cin>>annio_nacimiento;

    cout<<"Ingrese el anno actual: ";
    cin>>annio_actual;

    cout<<"Ingrese su mes de nacimiento: ";
    cin>>mes_nac;

    cout<<"Ingrese el mes actual: ";
    cin>>mes_act;

    cout<<"Ingrese su dia de nacimiento: ";
    cin>>dia_nac;

    cout<<"Ingrese el dia actual: ";
    cin>>dia_act;

    edad = annio_actual - annio_nacimiento;
    mes=mes_act-mes_nac;
    dias=dia_act-dia_nac;


    cout<<"Usted tiene "<<edad<<" annos de edad "<<mes<<" meses y "<<dias<<" dias";

    return 0;
}