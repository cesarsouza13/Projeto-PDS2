#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <string>
#include <map>
#include <list>
#include "produto.hpp"
#include "orcamento.hpp"

/**
 * @brief Esta classe e responsavel pela criação de um cliente
 * 
 */
class Cliente {

public:
    /**
   * @brief Construtor da classe cliente
   *@param nome nome do cliente
   *@param cep cep do cliente
   *@param cpf cpf do cliente
   *@param id identificador unico do cliente
   *
   */
    Cliente(string nome, int cep, string cpf, int id); //metodo construtor do cliente
     /**
   * @brief Metodo que retorna o id do cliente
   *@return int do id do cliente
   */
    int GetId(); //metodo que retorna o id do cliente por referencia
        /**
   *@brief Metodo que retorna o nome do cliente
   *@return string do noem do cliente
   */
    string GetNome(); //metodo que retorna o nome do cliente por referencia
        /**
   *@brief Metodo que imprime a descricao completa do cliente
   *@return string da desricao completa do cliente
   */
    string ImprimeCliente(); //metodo que retorna uma string da descricao completa dos atributos do cliente

private:
    /**
   * @brief nome do cliente
   */
    string nome;
    /**
   * @brief cep do cliente
   */
    int cep;
    /**
   * @brief cpf do cliente
   */
    string cpf;
    /**
   * @brief id do cliente
   */
    int id;
};



#endif
