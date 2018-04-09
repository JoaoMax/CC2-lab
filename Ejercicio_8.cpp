#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void intercambio(int arr1[], int arr2[], int n)
{
    for (int i=0; i<n;i++)
    {
        arr2[i]=arr1[n-i-1];
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
}
int main()
{
    int n, v;
    cout<<"Ingrese el tamaño del array 1: ";cin>>n;
    int arr1[n];
    int arr2[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Ingresa el valor numero "<<i+1<<" del array 1: ";cin>>v;
        arr1[i]=v;
    }
    intercambio(arr1, arr2, n);

    return 0;
}


