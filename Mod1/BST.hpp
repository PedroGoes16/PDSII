#ifndef BST_H
#define BST_H

#include "Aluno.hpp"

struct NodeT {
    Aluno aluno;
    NodeT* esq;
    NodeT* dir;
};

struct BST {
    NodeT* root = nullptr;
    void inserir_aluno_ajudante(NodeT* root, Aluno _aluno); //
    void inserir_aluno(Aluno _aluno); //
    void imprimir_arvore();
    Aluno* procurar_aluno(int _matricula);
};

#endif
