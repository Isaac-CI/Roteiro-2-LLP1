#include <string>
#include "Endereco.h"
#include "Pessoa.h"

Pessoa::Pessoa(std::string n)
{
    nome = n;
    telefone = "";
}

Pessoa::Pessoa(std::string n, Endereco e, std::string t)
{
    nome = n;
    endereco = e;
    telefone = t;
}

Endereco Pessoa::getEndereco()
{
    return endereco;
}

std::string Pessoa::getNome()
{
    return nome;
}

std::string Pessoa::getTelefone()
{
    return telefone;
}

void Pessoa::setEndereco(Endereco e)
{
    endereco = e;
}

void Pessoa::setNome(std::string n)
{
    nome = n;
}

void Pessoa::setTelefone(std::string t)
{
    telefone = t;
}
