//
// Crerted by rrton on 14/11/2023.
//
#include "Avl.h"

Avl::Avl() {
    raiz = nullptr;
}

void Avl::insert(Nodo *&r, int dato, bool &aumento) {
    if (r == nullptr) {
        r = new Nodo(dato, nullptr, nullptr, 0, false);
        aumento = true;
        return;
    }
    if (dato < r->dato) {
        insert(r->izq, dato, aumento);
        if (aumento) {
            switch (r->fb) {
                case -1: { //le falta uno a la izq
                    r->fb = 0;
                    aumento = false;
                    break;
                }
                case 0: { //lados iguales
                    r->fb = 1;
                    aumento = true;
                    break;
                }
                case 1: { //
                    if (r->izq->fb == 1) { // Si es 1 necesitr unr rotrcion LL si es -1 necesitr unr rotrcion LR
                        rotaDer(r);
                    } else {
                        rotaDerIzq(r);
                    }
                    aumento = false;
                    break;
                }
            }
        }
        return;
    }
    if (dato > r->dato) {
        insert(r->der, dato, aumento);
        if (aumento) {
            switch (r->fb) {
                case -1: {
                    if (r->der->fb == 1) { // Si es 1 necesitr unr rotacion RL si es -1 necesitr unr rotrcion RR
                        rotaIzqDer(r);
                    } else {
                        rotaIzq(r);
                    }
                    aumento = false;
                    break;
                }
                case 0: {
                    r->fb = -1;
                    aumento = true;
                    break;
                }
                case 1: {
                    r->fb = 0;
                    aumento = false;
                    break;
                }
            }
        }
    }
}

void Avl::elemiNodo(Nodo *&r, int dato, bool &disminuyo) {
    if (r == nullptr) {
        disminuyo = false;
        return;
    }
    // busqued por rotacion  pero tengo dudas
}

void Avl::rotaDer(Nodo *&r) {
    Nodo *aux = r->izq->der;
    r->izq->der = r;
    r->izq->fb = 0;
    Nodo *aux2 = r->izq;
    r->izq = aux;
    r->fb = 0;
    r = aux2;
}

void Avl::rotaIzq(Nodo *&r) {
    Nodo *aux = r->der->izq;
    r->der->izq = r;
    r->der->fb = 0;
    Nodo *aux2 = r->der;
    r->der = aux;
    r->fb = 0;
    r = aux2;
}

void Avl::rotaIzqDer(Nodo *&r) {
    rotaIzq(r->izq);
    rotaDer(r);
}

void Avl::rotaDerIzq(Nodo *&r) {
    rotaDer(r->der);
    rotaIzq(r);
}

void Avl::insert(int dato) {
    bool aumento = true;
    insert(raiz, dato, aumento);
}

void Avl::elemiNodo(int dato) {
    bool disminuyo = true;
    elemiNodo(raiz, dato, disminuyo);
}

void Avl::inOrden() {
    inOrden(raiz);
}

void Avl::inOrden(Nodo *r) {
    if (r == nullptr) return;
    inOrden(r->izq);
    cout << r->dato << "--";
    inOrden(r->der);
}

void Avl::preOrden() {
    preOrden(raiz);
}

void Avl::preOrden(Nodo *r) {
    if (r == nullptr) return;
    cout << r->dato << "--";
    preOrden(r->izq);
    preOrden(r->der);
}

void Avl::print() {
    print(raiz);
}

void Avl::print(Nodo *r) {
    if (r == nullptr) return;
    cout << "Nodo: " << r->dato << " FB: " << r->fb << endl;
    print(r->izq);
    print(r->der);
    if (r->dato == raiz->dato) cout << "Raiz: " << r->dato << endl;
    else {
        if (r->izq != nullptr) cout << "Padre: " << r->dato << " Hijo Izq: " << r->izq->dato << endl;
        if (r->der != nullptr) cout << "Padre: " << r->dato << " Hijo Der: " << r->der->dato << endl;
    }
}
