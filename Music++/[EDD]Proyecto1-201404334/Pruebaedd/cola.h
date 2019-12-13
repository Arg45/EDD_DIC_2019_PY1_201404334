#ifndef COLA_H
#define COLA_H
#include "nodo.h"

class cola {
public:
    cola();
    nodo* inicio;
    nodo* fin;
    void insertar(int id);
    void eliminar();
    void mostrar();
private:

};

#endif /* COLA_H */

