#include <iostream>
#include <string>
using namespace std;

int main(){
    Usuario u;

    try{
        u.setIdade(19);
        cout << "Idade: " << u.getIdade() << endl;

        u.setIdade(-19);
        cout << "Imposto(Geral): " << u.getIdade() << endl;

    }catch (EIdadeInvalido e ){
        cout << "Erro: " << e.what() << endl;
    }

    try{
        u.setNome("Isabely");
        cout << "Isabely: " << u.getNome() << endl;

        u.setNome("");
        cout << "Imposto(Geral): " << u.getNome() << endl;

    }catch (ENomeVazio e ){
        cout << "Erro: " << e.what() << endl;
    }
};