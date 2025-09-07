#include <iostream>
#include <string>
#include <stdexcept>
#include <cctype>
#include <algorithm>
#include <set>

class FormatoInvalido : public std::runtime_error {
public:
    FormatoInvalido(const std::string& msg) : std::runtime_error(msg) {}
};

bool validar(const std::string& doc, const std::string& tipo, size_t tam) {
    std::string d;
    for (char c : doc) if (std::isdigit(c)) d += c;
    if (d.size() != tam) throw FormatoInvalido(tipo + " deve ter " + std::to_string(tam) + " dígitos.");
    if (std::set<char>(d.begin(), d.end()).size() == 1) throw FormatoInvalido(tipo + " inválido");
    return true;
}

int main() {
    std::string testes[][3] = {
        {"123.456.789-09", "CPF", "11"}, {"11111111111", "CPF", "11"}, {"0123456789", "CPF", "11"},
        {"12.345.678/0001-95", "CNPJ", "14"}, {"00000000000000", "CNPJ", "14"}, {"123", "CNPJ", "14"}
    };
    
    for (auto& t : testes) {
        try {
            std::cout << t[0] << " -> " << t[1] << " válido? " 
                      << (validar(t[0], t[1], std::stoi(t[2])) ? "true" : "false") << '\n';
        } catch (const FormatoInvalido& e) {
            std::cout << t[0] << " -> Erro: " << e.what() << '\n';
        }
    }
    return 0;
}