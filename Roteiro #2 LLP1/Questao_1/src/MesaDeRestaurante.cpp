#include <vector>
#include <string>
#include "../include/Pedido.h"
#include "../include/MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
    for(int i = 0; i < 100; i++)
    {
        listaDePedidos[i].numero = -1;
        listaDePedidos[i].descricao = "";
        listaDePedidos[i].preco = 0;
        listaDePedidos[i].quantidade = 0;
    }
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p)
{
    int i, j;
    for(i = 0; i < 100; i++)
    {
        if(listaDePedidos[i].numero == p.numero || listaDePedidos[i].descricao == p.descricao)
        {
            listaDePedidos[i].quantidade++;
            break;
        }
    }
    if(i == 100)
    {
        for(j = 0; j < 100; j++)
        {
            if(listaDePedidos[j].numero == -1)
                break;
        }
        listaDePedidos[j].numero = p.numero;
        listaDePedidos[j].descricao = p.descricao;
        listaDePedidos[j].preco = p.preco;
        listaDePedidos[j].quantidade = p.quantidade;
    }
}

void MesaDeRestaurante::zeraPedidos()
{
    for(int i = 0; i < 100; i++)
    {
        listaDePedidos[i].numero = -1;
        listaDePedidos[i].descricao = "";
        listaDePedidos[i].preco = 0;
        listaDePedidos[i].quantidade = 0;
    }
}

double MesaDeRestaurante::calculaTotal()
{
    double retorno = 0;
    for(int i = 0; i < 100; i++)
    {
        retorno += listaDePedidos[i].preco;
    }
    return retorno;
}
