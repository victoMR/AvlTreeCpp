//
// Created by raton on 14/11/2023.
//

#include "Nodo.h"
Nodo::Nodo(int dat, Nodo *iz= nullptr, Nodo *de = nullptr, int fe=0, bool borr=false) {
    dato = dat;
    izq = iz;
    der = de;
    fb = fe;
    borrado = borr;
}