#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

using namespace std;

class Pedido
{

private:
    int numero;
    string descricao;
    int quantidade;
    float preco;


public:
    void setPedido(int numero, string descricao, int quantidade, float preco);
    int getNumero();
    int getQuantidade();
    string getDescricao();
    float getPreco();

};

#endif // PEDIDO_H
