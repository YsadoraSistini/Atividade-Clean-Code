#include <iostream>
#include <stdexcept>
#include <string>
#include <iomanip>

class ValorInvalido : public std::runtime_error {
public:
    ValorInvalido(const std::string& msg) : std::runtime_error(msg) {}
};

class ItemPedido {
    std::string nome;
    int qty;
    double preco;
    
    void validar(int q, double p) {
        if (q < 0) throw ValorInvalido("Quantidade não pode ser negativa.");
        if (p < 0) throw ValorInvalido("Preço não pode ser negativo.");
    }

public:
    ItemPedido(const std::string& n, int q, double p) : nome(n), qty(q), preco(p) { validar(q, p); }
    
    const std::string& getNome() const { return nome; }
    int getQuantidade() const { return qty; }
    double getPreco() const { return preco; }
    
    void setNome(const std::string& n) { nome = n; }
    void setQuantidade(int q) { validar(q, preco); qty = q; }
    void setPreco(double p) { validar(qty, p); preco = p; }
    
    double calcularSubtotal() const { return qty * preco; }
};

int main() {
    try {
        ItemPedido item("Monitor", 5, 799.90);
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Subtotal: R$ " << item.calcularSubtotal() << '\n';
        item.setQuantidade(-1); // Força erro
    } catch (const ValorInvalido& e) {
        std::cout << "Erro: " << e.what() << '\n';
    }
    return 0;
}