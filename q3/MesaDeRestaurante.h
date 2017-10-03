#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include <iostream>
#include <string>
#include "Pedido.h"


using namespace std;

class MesaDeRestaurante
{

private:
    Pedido pedido [200];
    int aux = 0;

public:
    MesaDeRestaurante();
    void adicionaAoPedido();
    void zeraPedidos();
    float calculaTotal();

};

#endif // MESADERESTAURANTE_H
