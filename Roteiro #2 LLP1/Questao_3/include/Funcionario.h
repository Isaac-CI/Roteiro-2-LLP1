#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H


class Funcionario
{
    public:
        Funcionario();
        std::string getMatricula();
        std::string getNome();
        float getSalario();
        void setMatricula(std::string);
        void setNome(std::string);
        void setSalario(float);

    protected:
        float salario;
        std::string matricula, nome;
    private:

};

#endif // FUNCIONARIO_H
