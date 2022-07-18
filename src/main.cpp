#include <iomanip>
#include <iostream>
#include <string>
#include <map>
#include <list>
#include "../include/banco.hpp"
#include "../include/produto.hpp"
#include "../include/orcamento.hpp"
#include "../include/cliente.hpp"
#include "../include/processador.hpp"
#include "../include/placavideo.hpp"
#include "../include/placamae.hpp"
#include "../include/banco.hpp"

using namespace std;

//mennu icial para decidir o que o usuario vai fazer
void Menu(){
    cout << "==========================================" << endl; 
    cout << "Escolha a opção desejada" << endl;
    cout << "1- Menu de cadastros" << endl;
    cout << "2- Menu de exibição de cadastros" << endl;
    cout << "3- Iniciar um orçamento" << endl;
    cout << "==========================================" << endl;
   

}


int main(){

    Banco* banco_dados = new Banco();

    string command;
    int id = 0;
    int id_cliente = 0;

    Menu();
  
    while (std::getline(std::cin, command) && !command.empty()){

        //Menu de cadastros
        if(command == "1"){
          
            cout << "==========================================" << endl ;
            cout << "1- Cadastrar um processador" << endl;
            cout << "2- Cadastrar uma placa de video" << endl;
            cout << "3- Cadastrar uma placa mãe" << endl;
            cout << "4- Cadastrar  um cliente" << endl;
            cout << "==========================================" << endl;
            string data;
            //loop para menu de cadastros
            while (std::getline(std::cin, data) && !data.empty()){
                
                string descricao;
                string marca;
                string tecnologia;
                int memoria_video;
                int nucleo;
                float valor;
                string nome;
                int cep;
                string cpf;

                if (data == "1") {
                    id++;
                    cout << "Insira a descricao do produto" << endl;
                    getline(cin, descricao);
                    cout << "Insira a marca do produto" << endl;
                    getline(cin, marca);
                    cout << "Informe  quantidade de nucleos" << endl;
                    cin >> nucleo;
                    cout << "Informe o valor do processador" << endl;
                    cin >> valor;
                    Produto* produto = new Processador("processador", descricao, marca, nucleo, valor, id);
                    cout << "Produto inserido: " <<  produto->ImprimeProduto() << endl << endl;
                    banco_dados->AdicionaProdutos(produto);

                } 

                else if (data == "2") {
                    id++;
                    cout << "Insira a descricao do produto" << endl;
                    getline(cin, descricao);
                    cout << "Insira a marca do produto" << endl;
                    getline(cin, marca);
                    cout << "Informe a memoria da placa" << endl;
                    cin >> memoria_video; 
                    cout << "Informe o valor da placa de video" << endl;
                    cin >> valor;
                    Produto* produto = new Placavideo("placa de video ", descricao, marca, memoria_video, valor, id);
                    cout <<"Produto inserido: " <<  produto->ImprimeProduto() << endl << endl;
                    banco_dados->AdicionaProdutos(produto);
                }

                else if (data == "3") {
                    id++;
                    cout << "Insira a descricao do produto" << endl;
                    getline(cin, descricao);
                    cout << "Insira a marca do produto" << endl;
                    getline(cin, marca);
                    cout << "Informe o valor da placa mae" << endl;
                    cin >> valor;
                    Produto* produto = new Placamae("placa mae ", descricao, marca,  valor, id);
                    cout <<"Produto inserido: " << produto->ImprimeProduto() << endl << endl;
                    banco_dados->AdicionaProdutos(produto);
                }
                 else if(data == "4"){
                    id_cliente++;
                    cout << "Informe o nome do cliente: ";
                    getline(cin, nome);
                    cout << endl;
                    cout << "Informe o CPF/CPNJ do cliente: ";
                    getline(cin, cpf);
                    cout << endl;
                    cout << "Informe o cep do cliente: ";
                    cin >> cep;
                    cout << endl;
                    Cliente* cliente = new Cliente(nome, cep, cpf, id_cliente);
                    cout << "Cliente Cadastrado: " << endl << cliente->ImprimeCliente() << endl;
                    banco_dados->AdicionaClientes(cliente);
                  
                }


                else{
                    break;
                } 
            
                
        
            }
        }
        //Menu de impessao de listas
        else if(command == "2"){

            cout << "==========================================" << endl;
            cout << "1- Exibir lista de produtos cadastrados" << endl;
            cout << "2- Exibir lista de clientes cadastrados" << endl;
            cout << "==========================================" << endl; 
            while (std::getline(std::cin, command) && !command.empty()) {
            
                if(command == "1"){
                    
                    banco_dados->ImprimeLista(command);
                  
                }

                else if(command == "2"){
                
                    banco_dados->ImprimeLista(command);
                    

                }

                else{
                    break;
                }
                cout << endl << "digite enter para voltar ao menu inicial"; 
                
            }


        }

        //Menu de operacao do orcamento
        else if(command == "3"){

            Orcamento* pedido  = new Orcamento();
            cout<< "Selecione o cliente de acordo com o ID" << endl;
            banco_dados->ImprimeLista("2");
            int id_cliente;
            cin >> id_cliente;
            Cliente* cliente = banco_dados->GetCliente(id_cliente);

            string data = "0";
            while(data != "3"){
                cout << "==========================================" << endl ;
                cout << "1- Adicionar produto" << endl;
                cout << "2- Remover produto" << endl;
                cout << "3- Finalizar e enviar orcamento" << endl;
                cout << "==========================================" << endl;
                cin >> data;
                if(data == "1"){
                    cout<< "Qual produto deseja adicionar de acordo com o ID?" << endl;
                    banco_dados->ImprimeLista(data);
                    int id_produto;
                    cin >> id_produto;
                    Produto* produto = banco_dados->GetProduto(id_produto);
                    pedido->AdcionaProduto(produto);
                
                
                }
                if(data == "2"){
                    cout<< "Qual produto deseja remover de acordo com o ID?" << endl;
                    int indice;
                    cin >> indice;
                    pedido->RemoveProduto(indice);
                }

                if(data == "3"){
                    

                cout<< "Orcamento cadastrado e enviado com sucesso" << endl;

                }


                cout << "Descrição do orçamento" << endl;
                cout<< "Cliente: " << cliente->ImprimeCliente() << endl << "Produtos:" << endl;
                pedido->ImprimeOrcamento() ;
            }
            pedido->~Orcamento();
          
          break;
        }

        else{
            break;
        }

        Menu();
        
}
   
  
     

return 0;
    
}

