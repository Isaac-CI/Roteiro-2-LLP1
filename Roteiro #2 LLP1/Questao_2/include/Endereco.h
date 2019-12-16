#ifndef ENDERECO_H
#define ENDERECO_H


class Endereco
{
    public:
        Endereco();
        Endereco(std::string, std::string, std::string, std::string, std::string, std::string);
        std::string toString();

    protected:
        std::string rua, numero, bairro, cidade, estado, cep;
    private:

};

#endif // ENDERECO_H
