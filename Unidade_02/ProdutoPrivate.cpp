#include <iostream>

class Produto{
private:
    int codigo;
    double preco;
    int quantidade;
public:
    void setCodigo(int novoCodigo){
        codigo = novoCodigo;
    }

    int getCodigo() const {
        return codigo;
    }

    void setPreco(double novoPreco){
        if(novoPreco >= 0.0){
            preco = novoPreco;
        }
    }

    double getPreco() const {
        return preco;
    }

    void setQuantidade(int novaQuantidade){
        if (novaQuantidade >= 0){
            quantidade = novaQuantidade;
        }
    }

    int getQuantidade() const {
        return quantidade;
    }
};

int main()
{
    Produto produto;

    produto.setCodigo(101);
    produto.setPreco(150.0);
    produto.setQuantidade(3);

    std::cout << "Codigo: " <<produto.getCodigo() << "\n";

    std::cout << "Preco: " <<produto.getPreco() << "\n";

    std::cout << "Quantidade: " <<produto.getQuantidade() << "\n";

    return 0;
}