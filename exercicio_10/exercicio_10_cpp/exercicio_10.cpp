#include <iostream>
#include <string>
#include <algorithm>    
#include <random>       
#include <stdexcept>    

bool processarPagamento(double valor, const std::string& metodoPagamento) {
    
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 4); // 0..4
    int chance = dist(gen);

    if (valor <= 0.0) {
        throw std::invalid_argument("Valor de pagamento Inválido!");
    }

    // transformar método para lowercase para comparação case-insensitive
    std::string metodo = metodoPagamento;
    std::transform(metodo.begin(), metodo.end(), metodo.begin(), ::tolower);

    if (!(metodo == "cartao" || metodo == "pix")) {
        throw std::invalid_argument("Forma de pagamento: " + metodoPagamento + " inválido!");
    }

    if (chance == 1) {
        throw std::runtime_error("Ocorreu um erro no processo de pagamento!");
    }

    std::cout << "Pagamento feito com sucesso!\n";
    return true;
}

int main() {
    try {
        bool resultado = processarPagamento(1, "pIx");
        // imprime "true"/"false" em vez de 1/0
        std::cout << std::boolalpha << resultado << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exceção: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}