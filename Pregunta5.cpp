#include <iostream>
#include <string>

using namespace std;

int main(){
    int x,i,sum=0;

    cout<<"ingrese un valor entre 0 y 100 y par ";
    cin>>x;

    if(x<0 ||x>=100){
        return main();
    }
    if(x%2==0){
        cout<<x;
    }else{return main();}

}