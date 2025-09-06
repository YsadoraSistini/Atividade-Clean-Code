#include <exception>
#include <string>
using namespace std;


class ENomeVazio : public exception {
public:
    const char* what() const noexcept override {
        return "O nome do usuário não pode ser vazio.";
    }
};

class EIdadeInvalido : public exception {
public:
    const char* what() const noexcept override {
        return "A idade deve estar entre 0 e 120 anos.";
    }
};