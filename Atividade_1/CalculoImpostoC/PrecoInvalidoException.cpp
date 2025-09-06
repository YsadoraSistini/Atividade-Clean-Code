#include <exception>
#include <string>
using namespace std;

// Criando exceção personalizada
class PrecoInvalidoException : public exception {
public:
    const char* what() const noexcept override {
        return "O preço não pode ser negativo.";
    }
};