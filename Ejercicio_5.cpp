#include<iostream>
#include<string.h>

using namespace std;

int tam1(char cad[]);
int tam2(char *);
char cad[20];

int main(){

    cout<<"Introduce una frase: ";
    cin.getline(cad,20,'\n');
    cout<<"El tamaño de la cadena es: "<<tam1(cad)<<endl;
    cout<<"Introduce una frase: ";
    cin.getline(cad,20,'\n');
    cout<<"El tamaño de la cadena es: "<<tam2(cad)<<endl;
    return 0;
}
int tam1(char cad[]){
    int cont1=0;
    while(cad[cont1]!='\0'){
        cont1++;
    }
    return cont1;
}
int tam2(char *cad){
    int cont2=0;
    while(*cad){
        cont2++;
        cad++;
    }
    return cont2;
}

