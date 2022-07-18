#include "../docteste/doctest.h"
#include "../include/placavideo.hpp"
#include "../include/produto.hpp"



TEST_CASE("Testando construtor da placa mae"){
    Produto* produto = new Placavideo("placa de video","geforce 940mx", "nvidia", 8, 1900, 20);
    CHECK_EQ(produto->GetId(), 20);
    CHECK_EQ(produto->getValor(), 1900);
     

}