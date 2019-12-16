#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

class MesaDeRestaurante : public Pedido
{
    public:
        MesaDeRestaurante();
        void adicionaAoPedido(Pedido);
        void zeraPedidos();
        double calculaTotal();


    protected:
        Pedido listaDePedidos[100];

    private:
};

#endif // MESADERESTAURANTE_H
