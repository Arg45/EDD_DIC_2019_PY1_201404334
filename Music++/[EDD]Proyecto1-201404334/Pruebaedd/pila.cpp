#include "pila.h"
#include <iostream>
#include <stdlib.h>

pila::pila() {
    inicio=NULL;
    fin=NULL;
}
void pila::insertar(int id){
    nodo* nuevo=new nodo(id);
    if(inicio==NULL){
        inicio=nuevo;
        fin=nuevo;
    }else{
        nuevo->siguiente=inicio;
        inicio=nuevo;
    }
}
void pila::mostrar(){
    nodo *aux=inicio;
    while(aux!=NULL){
        std::cout<<aux->ID<<std::endl;
        aux=aux->siguiente;        
    }
}
void pila::eliminar() {
    inicio=inicio->siguiente;
}


