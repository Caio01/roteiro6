#include "Pedido.h"

void Pedido ::setPedido(int numero, string descricao, int quantidade, float preco)
{

    this -> numero = numero;
    this -> descricao = descricao;
    this -> quantidade = quantidade;
    this -> preco = preco;

}

int Pedido :: getNumero()
{
    return this -> numero;
}

string Pedido :: getDescricao()
{
    return this -> descricao;
}

int Pedido :: getQuantidade()
{
    return this -> quantidade;
}

float Pedido :: getPreco()
{
    return this -> preco;
}
