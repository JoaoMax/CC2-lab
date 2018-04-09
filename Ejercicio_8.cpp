#include<iostream>
#include<stdlib.h>

using namespace std;

void intercambio(char arr1[], char arr2[], int n)
{
    int aux;
    for(int i=0;i<n;i++){
        aux=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=aux;
    }
}
int main()
{
    int n;
    char v;
    cout<<"Ingrese el tamaño del array 1: ";cin>>n;
    char arr1[n];
    char arr2[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Ingresa caracter numero "<<i+1<<" del array 1: ";cin>>v;
        arr1[i]=v;
    }
    for (int i=0;i<n;i++)
    {
        cout<<"Ingresa caracter numero "<<i+1<<" del array 2: ";cin>>v;
        arr2[i]=v;
    }
    cout<<"Cadena 1: ";
    for(int i=0;i<n;i++){
        cout<<arr1[i];
    }
    cout<<endl;
    cout<<"Cadena 2: ";
    for(int i=0;i<n;i++){
        cout<<arr2[i];
    }
    cout<<endl;
   intercambio(arr1, arr2, n);
    cout<<"Nueva Cadena 1: ";
    for(int i=0;i<n;i++){
        cout<<arr1[i];
    }
    cout<<endl;
    cout<<"Nueva Cadena 2: ";
    for(int i=0;i<n;i++){
        cout<<arr2[i];
    }
    return 0;
}

