#include <iostream>
#include <vector>
#include <stdexcept>
#include <iomanip> 
#include <cmath>  

bool estaVazia(const std::vector<double>& lista) {
    for (double v : lista) {
        if (v != 0.0) return false;
    }
    return true;
}

double calcularMedia(const std::vector<double>& lista) {
    if (estaVazia(lista)) {
        throw std::runtime_error("Vetor Vazio!");
    }

    double soma = 0.0;
    for (double v : lista) soma += v;
    return soma / static_cast<double>(lista.size());
}

double menorNumero(const std::vector<double>& lista) {
    if (estaVazia(lista)) {
        throw std::runtime_error("Vetor Vazio!");
    }

    double menor = lista[0];
    for (size_t i = 1; i < lista.size(); ++i) {
        if (lista[i] < menor) menor = lista[i];
    }
    return menor;
}

double maiorNumero(const std::vector<double>& lista) {
    if (estaVazia(lista)) {
        throw std::runtime_error("Vetor Vazio!");
    }

    double maior = lista[0];
    for (size_t i = 1; i < lista.size(); ++i) {
        if (lista[i] > maior) maior = lista[i];
    }
    return maior;
}

int main() {
    // vetor com zeros para demonstrar erro
    std::vector<double> lista = {0, 0, 0, 0, 0};

    std::cout << "Lista:\n{ ";
    for (size_t i = 0; i < lista.size(); ++i) {
        std::cout << lista[i];
        if (i + 1 < lista.size()) std::cout << " , ";
    }
    std::cout << " }\n\n";

    try {
        std::cout << "Média: " << calcularMedia(lista) << "\n";
        std::cout << "Menor número: " << menorNumero(lista) << "\n";
        std::cout << "Maior número: " << maiorNumero(lista) << "\n";
    } catch (const std::runtime_error& e) {
        std::cout << "Erro: " << e.what() << "\n";
        return 1;
    }

    return 0;
}