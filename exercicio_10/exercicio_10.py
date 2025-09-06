import random

class exercicio_10:

    def __init__(self):
     self.processarPagamento(500,"cartao")



    def processarPagamento(self, valor, metodoPagamento):
       if(valor <= 0):
          raise ValueError("O valor não pode ser menor ou igual a 0!")
    

       if not((metodoPagamento.casefold() == "pix".casefold()) or (metodoPagamento.casefold() == "cartao".casefold())):
          raise ValueError("O método: '", metodoPagamento, "' não é válido!")
       

       chance = random.randint(1,5)
       if(chance == 1):
          raise ValueError("Ocorreu um erro no processo de pagamento!")
       
       
       print("Pagamento realizado com sucesso!")
       return True

if(__name__ == "__main__"):
   exercicio_10()