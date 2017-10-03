#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include "MesaDeRestaurante.h"
#include <string>


using namespace std;

class RestauranteCaseiro
{
private:
    int aux =0;
    MesaDeRestaurante mesa[200];

public:
    RestauranteCaseiro();
    void adicionaAoPedido();
    void zeraMesas();
    float calculaTotalRestaurante();


};

#endif // RESTAURANTECASEIRO_H
