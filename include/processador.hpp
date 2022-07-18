#ifndef PROCESSADOR_H
#define PROCESSADOR_H
#include <iostream>
#include <string>
#include "produto.hpp"
using namespace std;

/**
 * @brief Esta subclasse é responsavel por criar produtos do tipo processador
 * 
 */
class Processador : public Produto {

public:

    /**
    * @brief Construtor da classa processador
    *@param componente componente placamae do produto
    *@param descricao descricao do produto processador
    *@param marca marca da placamae
    *@param nucleo quantidade de nucleo do processador
    *@param valor valor do processador
    *@param id identificador unico do produto
    */
    Processador(string componente,string descricao, string marca, int nucleo, float valor, int id);
    /**
    * @brief Metodo herdado responsavel por imprimir descricao completa do processador
    * @return retorna um uma string com a descricao completa
    * Id  - Componente Descricao marca nucleo R$ valor 
    */
    string ImprimeProduto() const override;//metodo que retorna uma strign com toda descricao o produto
        /**
    * @brief Metodo herdado responsavel por retornar o id do produto
    * @return retorna um int realcionado ao id unico do produto
    *  
    */
    int GetId() const override;//metodo que retorna o id do produto

    string GetDescricao();
 
private:
      /**
    * @brief descricao da placamae
    */
    string descricao;
      /**
    * @brief memoria da placa de video
    */
    string marca;
     /**
    * @brief quantiade de nucleo do processador
    */
    int nucleo;
     /**
    * @brief id do processador
    */
    int id;


};



#endif
