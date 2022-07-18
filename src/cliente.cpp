
#include <iostream>
#include <string>
#include <map>
#include <list>
#include "../include/produto.hpp"
#include "../include/orcamento.hpp"
#include "../include/cliente.hpp"

Cliente::Cliente(string nome, int cep, string cpf, int id){

    this->nome = nome;
    this->cep = cep;
    this->cpf = cpf;
    this->id = id;
}

int Cliente::GetId(){

    return this->id;
}

string Cliente::GetNome(){

    return this->nome;
}


string Cliente::ImprimeCliente(){

    return to_string(this->id) + "- " + "NOME: " + this->nome + " CEP: " + to_string(this->cep) + " CPNJ/CPF: " + this->cpf;
}