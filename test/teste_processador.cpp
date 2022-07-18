#include "../docteste/doctest.h"
#include "../include/processador.hpp"
#include "../include/produto.hpp"


TEST_CASE("Testando construtor do processador"){
    Produto* produto = new Processador("processador","Core I5 1400F", "INTEL", 6, 800, 1);
    CHECK_EQ(produto->GetId(), 1);
    CHECK_EQ(produto->getValor(), 800);
     

}