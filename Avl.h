//
// Created by raton on 14/11/2023.
//

#ifndef AVL_AVL_H
#define AVL_AVL_H

#include "nodo.h"

class Avl {
private:
    void insert(Nodo *&r, int dato, bool &aumento);

    void elemiNodo(Nodo *&r, int dato, bool &disminuyo);

    void inOrden(Nodo *r);

    void preOrden(Nodo *r);

    void print(Nodo *r);

public:
    Nodo *raiz;

    Avl();

    void insert(int dat);

    void
    rotaIzq(Nodo *&r); // el & es para que sea por referencia y eso hace que se modifique el arbol osea hace una copia
    void rotaDer(Nodo *&r);

    void rotaIzqDer(Nodo *&r);

    void rotaDerIzq(Nodo *&r);

    void inOrden();

    void preOrden();

    void print();

    void elemiNodo(int dato);
};


#endif //AVL_AVL_H
