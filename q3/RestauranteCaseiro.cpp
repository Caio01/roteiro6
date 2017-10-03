#include "RestauranteCaseiro.h"

void RestauranteCaseiro::adicionaAoPedido()
{
    int i=0;
    this ->mesa[i++].adicionaAoPedido();
}

void RestauranteCaseiro::zeraMesas()
{
    int i;
	for( i = 0; i < 200; i++ ){
		this->mesa[i].zeraPedidos();
	}

    this->aux = 0;
}

float RestauranteCaseiro::calculaTotalRestaurante()
{
    float total = 0.0;
	int i = 0;
	for( i = 0; i < 200; i++){
		total += this->mesa[i].calculaTotal();
	}
    return total;
}

RestauranteCaseiro :: RestauranteCaseiro()
{
    this -> zeraMesas();
}
