#include<iostream>

using namespace std;

void InsertionSort(int arr[],int);
void MergeSort(int arr[],int arr_aux[],int,int);
void QuickSort(int arr[],int,int,int);

void InsertionSort(int arr[],int n){
    int i,pos,aux;

    for(i=1;i<n;i++){
        pos=i;
        aux=arr[i];

        while((pos>0)&&(arr[pos-1]>aux)){
            arr[pos]=arr[pos-1];
            pos--;
        }
        arr[pos]=aux;
    }
}
void MergeSort(int arr[],int arr_aux[],int pri,int ult){
    int i,pri2,aux,n,mit;
    mit=(pri+ult)/2;
    pri2=mit+1;
    aux=pri;
    n=ult-pri+1;

    while((pri<=pri2)&&(mit<=ult)){
        if(arr[pri]<=arr[mit]){
            arr_aux[aux]=arr[pri];
            aux=aux+1;
            pri=pri+1;
        }
        else{
            arr_aux[aux]=arr[mit];
            aux=aux+1;
            mit=mit+1;
        }
    }
    while(pri<=pri2){
        arr_aux[aux]=arr[pri];
        pri=pri+1;
        aux=aux+1;
    }
    while(mit<=ult){
        arr_aux[aux]=arr[mit];
        mit=mit+1;
        aux=aux+1;
    }
    for(i=0;i<=n;i++){
        arr[ult]=arr_aux[ult];
        ult=ult-1;
    }
}
void QuickSort(int arr[],int n,int pri, int ult){
    int pivote,i,j,central;
    central=(pri+ult)/2;
    pivote=arr[central];
    i=pri;
    j=ult;
    do{
        while(arr[i]<pivote) i++;
        while(arr[j]>pivote) j--;
        if(i<=j){
            int aux;
            aux=arr[i];
            arr[i]=arr[j];
            arr[j]=aux;
            i++;
            j--;
        }
    }while(i<=j);
    if(pri<j)
        QuickSort(arr,n,pri,j);
    if(i<ult)
        QuickSort(arr,n,i,ult);

}


int main(){
    int pri,ult,n=6;
    int arr[]={12, 11, 13, 5, 6,7};
    int arr_aux[10];
    cout<<"Orden por Insertion Sort: "<<endl;
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Orden por Merge Sort: "<<endl;
    MergeSort(arr,arr_aux,pri,ult);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Orden por Quick Sort: "<<endl;
    QuickSort(arr,n,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

