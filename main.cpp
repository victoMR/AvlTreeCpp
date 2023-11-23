#include "Avl.h"

int main(int argc, char *argv[]) {
    Avl *avl = new Avl();
    for (int i = 5; i < 110; i += 10) {
        avl->insert(i);
    }
    cout << " IN ORDER ------------------" << endl;
    avl->inOrden();
    cout << "-----------------------\n" << endl;
    cout << "PRE ORDER ------------------" << endl;
    avl->preOrden();
    cout << "-----------------------\n" << endl;
    cout << "PRINT ------------------" << endl;
    avl->print();
    cout << "-----------------------\n" << endl;
    cout << "ELIMINAR ------------------" << endl;
    avl->elemiNodo(15);
    avl->elemiNodo(25);
    cout << "-----------------------\n" << endl;
    cout << "PRINT ------------------" << endl;
    avl->print();
    cout << "-----------------------\n" << endl;
    cout << "IN ORDER ------------------" << endl;
    avl->inOrden();
    cout << "-----------------------\n" << endl;
    return 0;
}
