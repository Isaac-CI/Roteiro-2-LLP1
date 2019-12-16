#ifndef PESSOA_H
#define PESSOA_H

#include "Endereco.h"

class Pessoa
{
    public:
        Pessoa(std::string);
        Pessoa(std::string, Endereco, std::string);
        std::string getNome();
        std::string getTelefone();
        Endereco getEndereco();
        void setNome(std::string);
        void setTelefone(std::string);
        void setEndereco(Endereco);

    protected:
        std::string nome, telefone;
        Endereco endereco;
    private:

};

#endif // PESSOA_H
