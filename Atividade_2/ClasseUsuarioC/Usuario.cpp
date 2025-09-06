#include <iostream>
#include <string>
using namespace std;

class Usuario{
private:
    int idade;
    string nome;
public: 
    int getIdade(){
        return idade;
    }

    string getNome(){
        return nome;
    }

    void setIdade(int anos){
        if (anos < 0 || anos > 120){
            throw EIdadeInvalido();
        }
        idade = anos;
    }

    void setNome(string nom){
        if (nom.empty()) {
            throw ENomeVazio();
        }
        nome = nom;
    }

    
};