#ifndef PLACAMAE_H
#define PLACAMAE_H
#include <iostream>
#include <string>
#include "produto.hpp"
using namespace std;

/**
 * @brief Esta subclasse é responsavel por criar produtos do tipo placamae
 * 
 */
class Placamae : public Produto {

public:
    /**
    * @brief Construtor da classae placamae
    *@param componente componente placamae do produto
    *@param descricao descricao do produto placamae
    *@param marca marca da placamae
    *@param valor valor da placa mae
    *@param id identificador unico do produto
    *
    */
    Placamae(string componente ,string descricao, string marca, float valor, int id); 
    /**
    * @brief Metodo herdado responsavel por imprimir descricao completa da placamae
    * @return retorna um uma string com a descricao completa
    
    */
    string ImprimeProduto() const override;
       /**
    * @brief Metodo herdado responsavel por retornar o id do produto
    * @return retorna um int realcionado ao id unico do produto
    */
    int GetId() const override; //metodo que retorna o id do produto


private:
    /**
    * @brief descricao da placamae
    */
    string descricao;
      /**
    * @brief marca da placamae
    */
    string marca;
      /**
    * @brief id da placamae
    */
    int id;


};



#endif
