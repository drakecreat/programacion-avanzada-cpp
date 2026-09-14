#include <iostream>
using namespace std;

int main (){

    int numero= 10;
    int *pt_numero = &numero;
    cout<<"direccion de memoria: "<<pt_numero<<endl;
    cout<<"valor de numero por puntero: "<< *pt_numero<<endl;
    

    int notas[5 ]={80,90,60,50,71};
    
    int *ptr_notas = notas;

    cout<<"direccion de memoria: "<< ptr_notas<<endl;
    cout<<"valor de numero por puntero: "<< *ptr_notas<<endl;
    for(int i=0; i < 5;i++){

        cout<<"valor de numero por puntero: "<<*(ptr_notas + i)<<" numero del arreglo: "<< i+ 1<<endl; 

    }
    return 0;

}