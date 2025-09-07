#include <iostream>
#include <string>
#include <stdexcept>
#include <random>

std::string gerarSenha(int tamanho, bool incluirNumeros, bool incluirSimbolos) {
    if (tamanho < 4 || tamanho > 30) {
        throw std::runtime_error("O tamanho da senha deve ser entre 4 e 30.");
    }

    std::string letrasMaiusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string letrasMinusculas = "abcdefghijklmnopqrstuvwxyz";
    std::string numeros = "0123456789";
    std::string simbolos = "!@#$%^&*()_-+=<>?";

    std::string caracteresBase = letrasMaiusculas + letrasMinusculas;

    if (incluirNumeros) {
        caracteresBase += numeros;
    }
    if (incluirSimbolos) {
        caracteresBase += simbolos;
    }

    if (caracteresBase.empty()) {
        throw std::runtime_error("Nenhum tipo de caractere selecionado para a senha.");
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, caracteresBase.size() - 1);

    std::string senha;
    for (int i = 0; i < tamanho; i++) {
        senha += caracteresBase[dist(gen)];
    }

    return senha;
}