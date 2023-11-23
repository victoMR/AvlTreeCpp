//
// Created by raton on 14/11/2023.
//

#ifndef AVL_NODO_H
#define AVL_NODO_H
#include "iostream"
using namespace std;
class Nodo {
 // si no le ponemos nivel de
 // acceso estara en packague
 // y solo podra ser accedido
 // por clases del mismo packague cual contiene la clase nodo
public:
    int dato;
    int fb;
    Nodo *izq;
    Nodo *der;
    bool borrado;
    Nodo(int dat, Nodo *iz , Nodo *de, int fe, bool borr);
};


#endif //AVL_NODO_H
