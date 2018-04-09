#include <iostream>

using namespace std;

int suma_iterativa(int arr[],int n){
    int suma=0;
    for(int i=0;i<n;i++){
        suma+=arr[i];
    }
    return suma;
}

int suma_recursiva(int arr[],int n){
    int suma=0;
    if (n<1) return 0;
    else
    {
        return arr[n-1]+suma_recursiva(arr, n-1);

    }
    return suma;
}

int main()
{
    int n, v;
    cout<<"Ingrese el tamaño del array: ";cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Ingresa el valor numero "<<i+1<<" del array: ";cin>>v;
        arr[i]=v;
    }
    cout<<"Suma del arreglo recursivamente: "<<suma_recursiva(arr, n)<<endl;
    cout<<"Suma del arreglo iterativamente: "<<suma_iterativa(arr, n)<<endl;
    return 0;
}
