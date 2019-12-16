#include <string>
#include "Funcionario.h"
#include "Consultor.h"
#include <iostream>

using namespace std;

int main()
{
    Funcionario pawn = Funcionario();
    Consultor supervisor = Consultor();

    pawn.setMatricula("2020098217");
    pawn.setNome("Jeremias");
    pawn.setSalario(2000.99);
    supervisor.setMatricula("2018097890");
    supervisor.setNome("Justiniano");
    supervisor.setSalario(2000.99);

    cout << pawn.getMatricula() << "\n" << pawn.getNome() << "\n" << pawn.getSalario() << endl;

    cout << supervisor.getMatricula() << "\n" << supervisor.getNome() << "\n" << supervisor.getSalario() << "\n" << supervisor.getSalario(50) << endl;

    return 0;
}
