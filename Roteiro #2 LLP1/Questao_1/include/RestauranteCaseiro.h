#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H


class RestauranteCaseiro : public MesaDeRestaurante
{
    public:
        RestauranteCaseiro(MesaDeRestaurante);
        void adicionaAoPedido(Pedido, MesaDeRestaurante);
        double calculaTotalRestaurante();

    protected:
        std::vector<MesaDeRestaurante> listaDeMesas;


    private:
};

#endif // RESTAURANTECASEIRO_H
