#include <iostream>
#include "RestauranteCaseiro.h"
#include "Pedido.h"
#include "MesaDeRestaurante.h"

using namespace std;

int main()
{
    float precoTotal;
    RestauranteCaseiro mesas;
    mesas.adicionaAoPedido();


    precoTotal = mesas.calculaTotalRestaurante();
    cout<<"PRECO TOTAL DA MESA: "<<precoTotal<<endl;


    return 0;
}
