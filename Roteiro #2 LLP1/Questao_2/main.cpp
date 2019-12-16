#include <string>
#include "Endereco.h"
#include "Pessoa.h"
#include <iostream>

using namespace std;

int main()
{
    Endereco badCompany = Endereco("Beco sem saida", "420", "Morro abandonado", "Cidade do crime", "Estado ausente", "098765432");
    Endereco Casinha = Endereco("rua dos bobos", "0", "Esmero", "Rio de janeiro", "Rio de janeiro", "049811743");
    Endereco dummy;
    Pessoa *Devedor = new Pessoa("Fulano");
    Pessoa Agiota = Pessoa("Beltrano", badCompany, "987654310");
    Devedor->setEndereco(Casinha);
    Devedor->setTelefone("923456781");
    cout << Casinha.toString() << endl;
    dummy = Agiota.getEndereco();
    cout << dummy.toString() << "\n" << Agiota.getNome() << "\n" << Agiota.getTelefone() << endl;
    dummy = Devedor->getEndereco();
    cout << dummy.toString() << "\n" << Devedor->getNome() << "\n" << Devedor->getTelefone() << endl;
    return 0;
}
