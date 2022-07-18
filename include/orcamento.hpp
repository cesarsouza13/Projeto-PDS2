#ifndef ORCAMENTO_H
#define ORCAMENTO_H
#include <iostream>
#include <string>
#include <map>
#include "produto.hpp"
/**
 * @brief Esta classe é responsavel por gerar pedidos de orcamento para o cliente
 * 
 */
class Orcamento {

public:
    /**
    * @brief Metodo responsavel por adicionar objeto produto para a lista de orcamento
    * @return retorna um valor booleano para informar se o produto ja foi adicionado ou nao ao orcamento
    */
   bool AdcionaProduto(Produto* produto); //adiciona o produto para a lista de pedido
    /**
    * @brief Metodo responsavel por remover o produto da lista de orcamento
    * @param id identificar unico do produto a ser removido
    */
   void RemoveProduto(int id); // remove o produto da lista de pedido de acordo com o id
    /**
    * @brief Metodo responsavel por imprimir todos os produtos da lista de orcamento
    * 
    */
   void ImprimeOrcamento(); //imprime o orcamento com todos os produtos
    /**
    * @brief Metodo responsavel por concluir o orcamento do cliente
    * @return retorna a lista de pedido do orcamento
    */
   map<int,Produto*> EnviarOrcamento(); // envia o orcamento criado e finaliza o programa
    /**
    * @brief destrutor da classe
    * 
    */
   ~Orcamento();//destrutor da classe orcamento
    
 
private:
    /**
    * @brief valor total do orcamento
    */
    float valor_total;
    /**
    * @brief lista de pedidos do orcamento com indices do id unico de produto
    */
    map<int,Produto*> pedido;
   
};



#endif
