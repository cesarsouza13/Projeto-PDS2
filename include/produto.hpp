#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>
#include <string>

using namespace std;
/**
 * @brief Esta supperclasse e responsavel pela a cricão de objetos produto
 */
class Produto{

public:
     /**
    * @brief Metodo virtual responsavel por retornar o id do produto
    * @return retorna um int realcionado ao id unico do produto
    * 
    */
    virtual int GetId() const = 0;//metodo que retorna o id do produto
      /**
    * @brief Metodo  responsavel por retornar o valor do produto
    * @return retorna um float do valor do prduto
    * 
    */
    float getValor() const;//metodo que retorna o valor do produto
      /**
    * @brief Destrutor da classe
    * 
    */
    virtual ~Produto()  = default;//destrutor padrao do produto
    /**
    * @brief Metodo virtual responsavel por imprimir a descircao do produto de acordo com a sua subclasse
    * 
    */
    virtual string ImprimeProduto() const = 0;//metodo que retorna uma strign com toda descricao o produto
protected:
    /**
    * @brief componente para identificar cada produto subclasse
    */
    string componente;
    /**
    * @brief valor do produto
    */
    float valor;
    


};

#endif
