#include "Aluno.hpp"

Aluno::Aluno(){}

Aluno::Aluno(int _matricula, std::string _nome){
    this->matricula = _matricula;
    this->nome = _nome;
}

void Aluno::imprimir_dados(){
    std::cout << this->matricula << " " << this->nome << std::endl;
}