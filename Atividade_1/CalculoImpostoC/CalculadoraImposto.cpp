#include <iostream>
#include <string>
using namespace std;

class CalculadoraImposto{
//private:
//    int preco;
//    bool ehAlimento;

public: 
    CalculadoraImposto(){
        //preco = 0;
        //ehAlimento = false;
    }

    double calculadoraImposto(bool ehAlimento, double preco){
        if (preco < 0){
            throw PrecoInvalidoException();
        }
        if(ehAlimento){
            return preco * 0.05;
        }else{
            return preco * 0.10;
        }
    }
};