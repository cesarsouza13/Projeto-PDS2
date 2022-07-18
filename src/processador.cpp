#include "../include/processador.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

Processador::Processador(const string componente,string descricao, string marca, int nucleo, float valor, int id){

    this->Produto::componente = componente; //Processador
    this->descricao = descricao;  //Core I5 1400F
    this->marca = marca; //INTEL
    this->nucleo = nucleo; //6
    this->Produto::valor = valor; //800
    this->id = id;
    
}

string Processador::ImprimeProduto() const{
  
    return to_string(this->id) + "- " + this->componente + " " + this->marca + " " + this->descricao + " " + to_string(this->nucleo) + " nucleos - R$" + to_string(this->Produto::valor);
}

int Processador::GetId() const{

    return this->id;
}

string Processador::GetDescricao(){

    return this->descricao;
}