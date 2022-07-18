
#include <iostream>
#include <string>
#include <map>
#include <list>
#include "../include/banco.hpp"
#include "../include/produto.hpp"
#include "../include/orcamento.hpp"
#include "../include/cliente.hpp"
using namespace std;



Produto* Banco::GetProduto(int id){
  
    auto it = this->lista_produtos.find(id);
    return (*it).second;        
 
}

Cliente* Banco::GetCliente(int id){

    auto it = this->lista_clientes.find(id);   
    return (*it).second; 
 
}
void Banco::AdicionaProdutos(Produto* produto){

    this->lista_produtos.insert(pair<int,Produto*>(produto->GetId(),produto));

}



void Banco::AdicionaClientes(Cliente* cliente){

    this->lista_clientes.insert(pair<int,Cliente*>(cliente->GetId(),cliente));
}



void Banco::ImprimeLista(string lista){

    if(lista == "1"){
        
        cout << "Lista completa de produtos cadastrados: "  << endl;
       for(auto it = this->lista_produtos.begin(); it != this->lista_produtos.end(); it++){

        cout << (*it).second->ImprimeProduto() << endl;

       }
    }

    else if(lista == "2"){
         cout << "Lista completa de clientes cadastrados: "  << endl;
         for(auto it = this->lista_clientes.begin(); it != this->lista_clientes.end(); it++){

          cout <<  (*it).second->ImprimeCliente() << endl;

         }
    }
       

   
    
  
}