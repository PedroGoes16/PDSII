#include "BST.hpp"

NodeT* createNode(Aluno _aluno) {
    NodeT* aux = new NodeT;
    aux->aluno = _aluno;
    aux->esq = nullptr;
    aux->dir = nullptr;
    return aux;
}

void BST::inserir_aluno_ajudante(NodeT* n, Aluno _aluno){
    if (_aluno.matricula < n->aluno.matricula) {
        if (n->esq == nullptr) {
            n->esq = createNode(_aluno);
        } else {
            inserir_aluno_ajudante(n->esq, _aluno);
        }
    } else if (_aluno.matricula > n->aluno.matricula) {
        if (n->dir == nullptr) {
            n->dir = createNode(_aluno);
        } else {
            inserir_aluno_ajudante(n->dir, _aluno);
        }
    }
}

void BST::inserir_aluno(Aluno _aluno) {
    if (root != nullptr) {
        inserir_aluno_ajudante(root, _aluno);
    } else {
        root = createNode(_aluno);
    }
}

void inorder(NodeT* n) {
    if(n == nullptr)
        return;
    inorder(n->esq);
    n->aluno.imprimir_dados();
    inorder(n->dir);
}

void BST::imprimir_arvore() {
    inorder(root);
    std::cout << std::endl;
}

Aluno* pesquisar(NodeT* n, int matricula) {
    while(n != nullptr){
        if(n->aluno.matricula == matricula){
            break;
        } else if(n->aluno.matricula > matricula){
            n = n->esq;
        } else {
            n = n->dir;
        }
    }
    return &n->aluno;
}

Aluno* BST::procurar_aluno(int matricula){
    return pesquisar(root, matricula);
}
