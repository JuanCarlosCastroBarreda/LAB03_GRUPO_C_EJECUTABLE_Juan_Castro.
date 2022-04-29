#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x,i=2,j,cont,suma;
    cout<<"Ingrese un numero: "<<endl;
    cin>>x;
    cout<<"Lo primos entre 1 y "<<x<<" son:\n";
    while(i<=x){
        cont=0;
        j=1;
        while(j<=i){
            if(i%j==0){
                cont++;
            }
            j++;}

            if(cont==2){
                suma++;
                cout<<i<<endl;
                }
            i++; 
        }
   return 0;
}