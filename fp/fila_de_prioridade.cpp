#include "fila_de_prioridade.h"

FilaDePrioridade::FilaDePrioridade(){
    this->primeiro_ = nullptr;
}

string FilaDePrioridade::primeiro() const{
    return this->primeiro_->nome;
}

int FilaDePrioridade::tamanho() const{
    No* aux;
    aux = this->primeiro_;
    int i = 0;
    while(aux != nullptr){
        aux = aux->next;
        i++;
    }
    return i;
}

bool FilaDePrioridade::vazia() const{
    if(this->primeiro_ == nullptr){
        return true;
    } else {
        return false;
    }
}

void FilaDePrioridade::RemoverPrimeiro(){
    No* aux = primeiro_;
    this->primeiro_ = aux->next;
    delete aux;
}

void FilaDePrioridade::Inserir(int p, string s){
    No* aux;
    aux->idade = p;
    aux->nome = s;
    aux->next = nullptr;

    No* aux2 = this->primeiro_;
    No* aux2_anterior = nullptr;

    if(this->primeiro_ == nullptr){
        this->primeiro_ = aux;
        delete aux;
        return;
    } else {
        while(aux2 != nullptr){
            if(aux->idade > aux2->idade){
                aux2_anterior->next = aux;
                aux->next = aux2;
                return;
            } else if(aux2->next == nullptr){
                aux->next = nullptr;
                aux2->next = aux;
            } else {
                aux2_anterior = aux2;
                aux2 = aux2->next;
            }
        }
    }
    delete aux2;
    delete aux2_anterior;
    delete aux;
}

void FilaDePrioridade::Limpar(){
    while (this->primeiro_ != nullptr){
        No* aux = nullptr;
        aux = this->primeiro_;
        this->primeiro_ = this->primeiro_->next;
        aux = nullptr;
        delete aux;
    }
    
}