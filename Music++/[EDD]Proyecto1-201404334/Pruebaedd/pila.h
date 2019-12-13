
#ifndef PILA_H
#define PILA_H
#include "nodo.h"

class pila {
public:
    pila();
    nodo* inicio;
    nodo* fin;
    void insertar(int id);
    void eliminar();
    void mostrar();
private:

};

#endif /* PILA_H */

