#ifndef PEDIDO_H
#define PEDIDO_H


class Pedido
{
    public:
        Pedido(int, int, std::string, double);
        Pedido();
        int numero, quantidade;
        std::string descricao;
        double preco;

    protected:

    private:

};

#endif // PEDIDO_H
