#include <string>
#include "Endereco.h"

Endereco::Endereco()
{
    rua = "";
    numero = "";
    bairro = "";
    cidade = "";
    estado = "";
    cep = "";
}

Endereco::Endereco(std::string r, std::string n, std::string b, std::string city, std::string e, std::string c)
{
    rua = r;
    numero = n;
    bairro = b;
    cidade = city;
    estado = e;
    cep = c;
}

std::string Endereco::toString()
{
    return rua + "\n" + numero + "\n" + bairro + "\n" + cidade + "\n" + estado + "\n" + cep;
}
