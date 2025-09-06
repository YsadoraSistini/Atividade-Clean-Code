#include <iostream>
#include <string>
using namespace std;

int main(){
    CalculadoraImposto cal;

    try{
        double imposto = cal.calculadoraImposto(true,100);
        cout << "Imposto(Alimento): " << imposto << endl;

        double imposto1 = cal.calculadoraImposto(false,200);
        cout << "Imposto(Geral): " << imposto1 << endl;

        double imposto2 = cal.calculadoraImposto(false,-200);
        cout << "Imposto(Negativo): " << imposto2 << endl;
    }catch (PrecoInvalidoException e ){
        cout << "Erro: " << e.what() << endl;

    }
};