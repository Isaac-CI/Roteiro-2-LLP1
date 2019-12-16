#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora(std::string, double);
        double calcularPagamentoSemanal(int);

    protected:

    private:
        double valorDaHora;
};

#endif // TRABALHADORPORHORA_H
