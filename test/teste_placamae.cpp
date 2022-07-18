#include "../docteste/doctest.h"
#include "../include/placamae.hpp"
#include "../include/produto.hpp"


TEST_CASE("Testando construtor da placa mae"){
    Produto* produto = new Placamae("placamae","placa mae prime b450m", "ASUS", 900, 2);
    CHECK_EQ(produto->GetId(), 2);
    CHECK_EQ(produto->getValor(), 900);
     

}