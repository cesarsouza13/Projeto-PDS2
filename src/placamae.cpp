#include "../include/produto.hpp"
#include "../include/placamae.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

Placamae::Placamae(string componente,string descricao, string marca, float valor, int id){

    this->Produto::componente = componente;
    this->descricao = descricao;
    this->marca = marca;
    this->Produto::valor = valor;
    this->id = id;
}


string Placamae::ImprimeProduto() const{

    return to_string(this->id) + "- " + this->componente + this->marca + this->descricao + " - R$" + to_string(this->Produto::valor);
}

int Placamae::GetId() const{

    return this->id;
}