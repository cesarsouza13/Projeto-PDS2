
#include "../include/placavideo.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

Placavideo::Placavideo(const string componente, string descricao, string marca, int memoria_video, float valor, int id){

    this->Produto::componente = componente;
    this->descricao = descricao;
    this->marca = marca;
    this->memoria_video = memoria_video;
    this->Produto::valor = valor;
    this->id = id;
}


string Placavideo::ImprimeProduto() const{
   

    return to_string(this->id) + "- " +  this->componente + this->marca + " " + this->descricao + " " + to_string(this->memoria_video) + "GB - R$" + to_string(this->Produto::valor);
}

int Placavideo::GetId() const{

    return this->id;
}