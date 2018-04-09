#include<iostream>
#include<string.h>

using namespace std;

bool Palindromo(char cad[],int,int);

int main(){
    char cad[15];
    int tamano;
    bool pal;
    cout<<"Ingrese una cadena: "<<endl;
    cin.getline(cad,50);
    tamano=strlen(cad);

    pal=Palindromo(cad,0,tamano-1);

    if(pal==true)
        cout<<"Es palindromo"<<endl;
    else
        cout<<"No es palindromo"<<endl;

    return 0;
}
bool Palindromo(char cad[],int pri,int ult){
    if(pri>=ult)
        return true;
    if(cad[pri]==cad[ult])
        Palindromo(cad,pri+1,ult-1);
    else
        return false;
}
