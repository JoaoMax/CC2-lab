#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void sumarMatrices(int **,int **,int,int);
void mostrarMatrizMultiplicar(int **,int,int);

int **puntero_matriz1,**puntero_matriz2,nFilas,nCol;

int main(){
	pedirDatos();
	sumarMatrices(puntero_matriz1,puntero_matriz2,nFilas,nCol);
	mostrarMatrizMultiplicar(puntero_matriz1,nFilas,nCol);

	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz2[i];
	}
	delete[] puntero_matriz2;

	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz1[i];
	}
	delete[] puntero_matriz1;

	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>nFilas;
	cout<<"Digite el numero de columnas: ";
	cin>>nCol;

	puntero_matriz1 = new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		puntero_matriz1[i] = new int[nCol];
    }

	cout<<"\nDigitando los elementos de la primera matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz1+i)+j);
		}
	}


	puntero_matriz2 = new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		puntero_matriz2[i] = new int[nCol];
	}

	cout<<"\nDigitando los elementos de la segunda matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz2+i)+j);
		}
	}
}

void sumarMatrices(int **puntero_matriz1,int **puntero_matriz2,int nFilas,int nCol){
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			*(*(puntero_matriz1+i)+j) *= *(*(puntero_matriz2+i)+j);
		}
	}
}

void mostrarMatrizMultiplicar(int **puntero_matriz1,int nFilas,int nCol){
	cout<<"\nLa multiplicacion de ambas matrices es: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz1+i)+j)<<" ";
		}
		cout<<"\n";
	}
}
