#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void copy_arr(char s[], char t[],int n)
{
    for (int i=0;i<n;i++)
    {
        s[n+i]=t[i];
    }
    for (int i=0;i<n*2;i++)
    {
        cout<<s[i]<<" ";
    }
}

int main()
{
    int n;
    char v;
    cout<<"Ingrese el tamaño de los arrays : ";cin>>n;
    char s[n];
    char t[n];
    cout<<"Primera Palabra"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<"Ingresa el caracter numero"<<i+1<<" del array S: ";cin>>v;
        s[i]=v;
    }
    cout<<"Segunda Palabra"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<"Ingresa el caracter numero "<<i+1<<" del array T: ";cin>>v;
        t[i]=v;
    }
    copy_arr(s, t, n);

    return 0;
}
