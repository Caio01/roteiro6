#include "MesaDeRestaurante.h"

MesaDeRestaurante :: MesaDeRestaurante()
{
    this ->zeraPedidos();
}

void MesaDeRestaurante :: adicionaAoPedido()
{
    int numero,quantidade;
    string descricao;
    float preco;

    cout<<"_______COMANDA_______"<<endl<<endl;
    cout<<"Numero da Mesa: ";
    cin>>numero;
    cout<<"Descricao: ";
    cin>>descricao;
    cout<<"Valor: ";
    cin>> preco;


    this ->pedido[this -> aux].setPedido(numero, descricao, quantidade, preco);
    this ->aux++;
}

void MesaDeRestaurante :: zeraPedidos()
{
    for(int i =0; i < 200; i++)
    {
        this -> pedido[i].setPedido(0,"",0,0.0);
    }

    this -> aux = 0;
}

float MesaDeRestaurante :: calculaTotal()
{
    float valor= 0;

    for(int i=0; i < this -> aux; i++)
    {
        valor += this->pedido[i].getQuantidade() * this->pedido[i].getPreco();
    }
    return valor;
}




