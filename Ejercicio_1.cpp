#include<iostream>
#include<conio.h>
using namespace std;

void cambio(int,int,int);
void valNuevo(int&,int&);

int main(){
    int num1=4,num2=8,aux;
    cout<<"El valor del primer numero es: "<<num1<<endl;
    cout<<"El valor del segundo numero es: "<<num2<<endl;
    cambio(num1,num2,aux);
    valNuevo(num1,num2);
    cout<<"El valor cambiado dentro de la funcion del primer numero es: "<<num1<<endl;
    cout<<"El valor cambiado dentro de la funcion del segundo numero es :"<<num2<<endl;


    getch();
    return 0;
}
void cambio(int a,int b,int aux){
    aux=a;
    a=b;
    b=aux;
    cout<<"Paso por valor: "<<endl;
    cout<<"El nuevo valor del primer numero es: "<<a<<endl;
    cout<<"El nuevo valor del segundo numero es: "<<b<<endl;
}
void valNuevo(int& xnum, int& ynum){
    cout<<"Paso por referencia: "<<endl;
    cout<<"El nuevo valor del primer numero es: "<<xnum<<endl;
    cout<<"El nuevo valor del segundo numero es: "<<ynum<<endl;
    xnum=1;
    ynum=2;
}
