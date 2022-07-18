#ifndef BANCO_H
#define BANCO_H
#include <iostream>
#include <string>
#include <map>
#include <list>
#include "produto.hpp"
#include "orcamento.hpp"
#include "cliente.hpp"

/**
 * @brief Esta classe e responsavel pelo cadastro de produtos e clientes para ser consultados.
 * Ela armazenda a lista de pedidos e de clientes e acordo com o cadastro pelo usuario
 * de vendas.
 */
class Banco {

public:
    
  /**
   * @brief Retorna um produto
   *@param id identificador do cliente
   * @return Obejto Produto
   */
    Produto* GetProduto(int id); 
     /**
   * @brief Retorna um cliente
   *@param id identificador do produto
   * @return Client Obejto Cliente
   */
    Cliente* GetCliente(int id);
     /**
   * @brief Adciona um objeto produto para o banco de dados
   **@param produto  objeto produto
   */
    void AdicionaProdutos(Produto* produto); //metodo responsavel por cadastrar produtos no banco de dados
      /**
   * @brief Adciona um objeto cliente para o banco de dados
   **@param cliente objeto cliente
   */
    void AdicionaClientes(Cliente* cliente); //metodo responsavel por cadastrar clientes no banco de dados

    /**
   * @brief Imprime a lista completa de cadastros
   **@param lista parametro e qual list a ser empressa
   */
    void ImprimeLista(string lista);
 
private:

    map<int,Produto*> lista_produtos;
    map<int,Cliente*> lista_clientes;
   

};



#endif
