#include <iostream>

class Produto {
    int codigo;
    int quantidade;
    double preco;
    double desconto;

    public:
        void definirDados() {
            std::cout<<"=== CADASTRO DE PRODUTO ==="<<std::endl;
            std::cout<<"Codigo:";
            std::cin>>codigo;
            std::cout<<"Preco:";
            std::cin>>preco;
            std::cout<<"Quantidade:";
            std::cin>>quantidade;
            std::cout<<"Digite o percentual de desconto:";
            std::cin>>desconto;
        }

        double aplicarDesconto(double percentual){
            return preco * (1.0 - (percentual / 100.0));
        }
        
        void exibirDados(){
            std::cout << "\n== PRODUTO ==\n";
            std::cout<<"Codigo: "<<codigo;
            std::cout << "Preco com desconto base: R$ \n" << aplicarDesconto(desconto) << "\n";
            std::cout << "Quantidade: " << quantidade << "\n";
        }

};

int main()
{

    Produto produto;
    produto.definirDados();
    produto.exibirDados();
    return 0;
}
