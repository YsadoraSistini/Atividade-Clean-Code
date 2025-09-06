from PrecoInvalidoException import PrecoInvalidoException

class CalculadoraImposto:
    def __init__(self):
        pass 

    def calcular_imposto(self, ehAlimento, preco):
        if preco < 0:
            raise PrecoInvalidoException("O preço não pode ser negativo.")
        
        if(ehAlimento):
            return preco * 0.05
        else:
            return preco * 0.10
