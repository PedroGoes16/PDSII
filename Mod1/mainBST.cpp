// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_bst.hpp"

int main() {
  
    // NÃO ALTERE ESSA LINHA
    avaliacao_basica();

    Aluno *alunos = new Aluno[10];
    BST bst;

    for(int i = 0; i < 10; i++){
        std::cin >> alunos[i].matricula >> alunos[i].nome;
        bst.inserir_aluno(alunos[i]);
    }

    std::cout << std::endl;

    bst.imprimir_arvore();    

    return 0;
}