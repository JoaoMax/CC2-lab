#include<iostream>

using namespace std;

class Nodo{
	public:
		int valor;
		Nodo * siguiente;
		Nodo(int v=0){valor=v; siguiente=NULL;}
};

class Lista{
	public:
		Nodo * inicio;
		Lista(){inicio=NULL;}
		void insertar(int valor);
		void mostrar();
		void eliminar_nodo(int n);
		void buscar(int e);
};

void Lista::insertar(int valor){
	Nodo * nuevo = new Nodo(valor); //Se crea un nuevo nodo
	if(inicio == NULL){ // Se verifica si la lista esta vacia
		inicio = nuevo; // El puntero de inicio apunta al nuevo nodo creado
	}
	else{
		Nodo * aux = inicio; //Se crea una copia auxiliar de inicio
		while(aux->siguiente != NULL){ //Verificamos que el auxiliar apunte al ultimo nodo
			aux=aux->siguiente;// En cada bucle el puntero auxiliar avanza al siguiente nodo
		}
		nuevo->siguiente=aux->siguiente; //El nuevo nodo creado apunta al siguiente nodo de auxiliar
		aux->siguiente=nuevo;  // Auxiliar apunta al nuevo elemento
	}
}

void Lista::mostrar(){
    Nodo *aux=inicio; //Se crea un nuevo nodo y lo igualamos a inicio
    int cont=1;
    while(aux!=NULL){ //Verificamos que el auxiliar apunte al ultimo nodo
        cout<<"El nodo numero "<<cont<<" contiene el valor: "<<aux->valor<<endl; //Imprime el valor que apunta cada nodo de la lista de inicio a fin
        aux=aux->siguiente; // Movemos el puntero al siguiente nodo
        cont++;//El contador aumenta
    }
}

void Lista::eliminar_nodo(int n){
    if(inicio!=NULL){ //Se verifica que la lista no este vacia
        Nodo *aux_borrar;
        Nodo *anterior=NULL;
        aux_borrar=inicio;

        while((aux_borrar!=NULL)&&(aux_borrar->valor!=n)){ //Se verifica que se apunte a un valor y recorre la lista
            anterior=aux_borrar;
            aux_borrar=aux_borrar->siguiente; // Se mueve el puntero al siguiente nodo
        }
        if(aux_borrar==NULL){
            cout<<"El elemento no existe";
        }
        else if(anterior==NULL){
            inicio=inicio->siguiente; // Se mueve el puntero al siguiente nodo
            delete aux_borrar;
        }
        else{
            anterior->siguiente=aux_borrar->siguiente; //Anterior apunta al siguiente de aux_borrar
            delete aux_borrar;
        }
    }
}

void Lista::buscar(int e){
    bool flag=false;

    Nodo *actual=inicio; //Se crea un nuevo nodo que apunte al nodo inicio

    while((actual!=NULL)&&(actual->valor<=e)){
        if(actual->valor==e){
            flag=true;
        }
        actual=actual->siguiente; // movemos el puntero al siguiente nodo
    }
    if(flag==true){
        cout<<"El Valor "<<e<<" SI esta en la lista\n";\
    }
    else{
        cout<<"El Valor "<<e<<" NO esta en la lista\n";
    }
}

void menu(){
    cout<<"\n1.- Insertar nodo"<<endl;
    cout<<"2.- Mostrar lista"<<endl;
    cout<<"3.- Eliminar nodo"<<endl;
    cout<<"4.- Buscar nodo"<<endl;
    cout<<"5.- Salir"<<endl;
}
int main(){

	Lista *lista1=new Lista(); //Se crea una lista y se llama al constructor
    int num, cant, opc;
    menu();//Se llama al menu
    cout<<"\nSelecciona una opcion del menu: "<<endl;
    cin>>opc;
    while(opc!=5){
        switch(opc){
        case 1:
            cout<<"\nInserte la cantidad de nodos que ingresara a la lista:"; cin>>cant;
            while(cant>0){
                cout<<"\nInserte un valor para el nodo: "; cin>>num;
                lista1->insertar(num);
                cant--;
            }
            break;
        case 2: cout<<"La lista es: "<<endl;
            lista1->mostrar();
            break;
        case 3: cout<<"\nInserte el valor del nodo a eliminar: "; cin>>num;
            lista1->eliminar_nodo(num);
            break;
        case 4: cout<<"\nInserte el valor del nodo a buscar: "; cin>>num;
            lista1->buscar(num);
            break;
        case 5: break;
        default: cout<<"El valor que ingreso no se encuentra en las opciones";
                break;
        }
        menu();//Se llama al menu
        cout<<"Selecciona una opcion del menu: "<<endl;
        cin>>opc;
	}
	cout<<"\nGracias por usar este programa!";
	return 0;
}
