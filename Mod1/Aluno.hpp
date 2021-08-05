#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

struct Aluno {
    int matricula;
    std::string nome;

    Aluno();
    Aluno(int _matricula, std::string _nome);
    void imprimir_dados();
};

#endif