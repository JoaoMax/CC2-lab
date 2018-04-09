#include<iostream>
#include<string.h>

using namespace std;

bool Palindromo(char palabra[],int,int);

int main(){
    char palabra[15];
    int tamano;
    bool pal;
    cout<<"Ingrese una palabra: "<<endl;
    cin.getline(palabra,50);
    tamano=strlen(palabra);

    pal=Palindromo(palabra,0,tamano-1);

    if(pal==true)
        cout<<"Es palindromo"<<endl;
    else
        cout<<"No es palindromo"<<endl;

    return 0;
}
bool Palindromo(char palabra[],int pri,int ult){
    if(pri>=ult)
        return true;
    if(palabra[pri]==palabra[ult])
        Palindromo(palabra,pri+1,ult-1);
    else
        return false;
}
