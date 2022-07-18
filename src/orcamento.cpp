#include <iomanip>
#include <iostream>
#include <string>
#include <map>
#include <list>
#include "../include/banco.hpp"
#include "../include/produto.hpp"
#include "../include/orcamento.hpp"
#include "../include/cliente.hpp"

Orcamento::~Orcamento(){

    this->pedido.clear();
}



bool Orcamento::AdcionaProduto(Produto* produto){ //metodo que adciona produtos ao map pedidos, encrementa o id e o valor total

   auto it = this->pedido.find(produto->GetId());
   if(it == this->pedido.end()){
   pedido.insert(pair<int,Produto*>(produto->GetId(),produto));

   this->valor_total += produto->getValor();
   return true;
   }

   else{
    cout << "Produto ja inserido, tente novamente" << endl;
    return false;
   }
}

void Orcamento::RemoveProduto(int id){ //metodo que remove produto e decrementa o valor do orçamento
    
    auto it = this->pedido.find(id);
    this->valor_total -= it->second->getValor();
    this->pedido.erase(it);
   
}

map<int,Produto*> Orcamento::EnviarOrcamento(){

    return this->pedido;
}

void Orcamento::ImprimeOrcamento(){

 
   
    for(auto it = this->pedido.begin(); it != this->pedido.end(); it++){

       cout << (*it).second->ImprimeProduto() << endl;     
      
    }
    
    cout << "Valor total do orçamento R$" + to_string(this->valor_total) << endl;



}