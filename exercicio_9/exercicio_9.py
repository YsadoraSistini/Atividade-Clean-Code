class exercicio_9:
    def __init__(self):
        lista = [2,3,4,5,7]

        print("Lista: [ ", end="")
        for i in range(len(lista)):
           print(lista[i]," ", end="")
        print("]")

        print("Media: ",self.calcularMedia(lista))
        print("Menor numero: ",self.encontrarMenor(lista))
        print("Maior numero: ",self.encontrarMaior(lista))
    
    def calcularMedia(self, lista):
        if(self.estaVazia(lista)):
            
          raise ValueError("A lista está Vazia!")

        return sum(lista) / len(lista)
    
    def encontrarMenor(self, lista):
        if(self.estaVazia(lista)):
          raise ValueError("A lista está Vazia!")

        menor = min(lista)
        return menor
    
    def encontrarMaior(self,lista):
        if(self.estaVazia(lista)):
          raise ValueError("A lista está Vazia!")
        
        maior = max(lista)
        return maior
    
    def estaVazia(self,lista):
        if(len(lista)==0):
            return True
        return False


if(__name__ == "__main__"):
    exercicio_9()