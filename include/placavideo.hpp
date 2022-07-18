#ifndef PLACAVIDEO_H
#define PLACAVIDEO_H
#include <iostream>
#include <string>
#include "produto.hpp"
using namespace std;

/**
 * @brief Esta subclasse é responsavel por criar produtos do tipo placa de video
 * 
 */
class Placavideo : public Produto {

public:

    /**
    * @brief Construtor da classae placa de vieo
    *@param componente componente placa de video do produto
    *@param descricao descricao do produto placa de video
    *@param marca marca da placa de video
    *@param valor valor da placa de video
    *@param id identificador unico do produto
    *
    */
    Placavideo(const string componente,string descricao, string marca, int memoria_video, float valor, int id);
    /**
    * @brief Metodo herdado responsavel por imprimir descricao completa da placa de video
    * @return retorna um uma string com a descricao completa
    * Id  - Componente Descricao marca memoria_video R$ valor 
    */
    string ImprimeProduto() const override;
     /**
    * @brief Metodo herdado responsavel por retornar o id do produto
    * @return retorna um int realcionado ao id unico do produto
    *  
    */
    int GetId() const override;
 
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
    * @brief memoria da placa de video
    */
    int memoria_video;
    /**
    * @brief id da placa de video
    */
    int id;
    


};



#endif
