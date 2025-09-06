from ExceptionUsuario import EIdadeInvalido, ENomeVazio

class Usuario:

    def __init__(self):
        pass

    def get_idade(self):
        return getattr(self, "idade", None) 
    
    def set_idade(self, idade):
        if idade < 0 or idade > 120:
            raise EIdadeInvalido("A idade deve estar entre 0 e 120 anos.")
        
        self.idade = idade

    def get_nome(self):
        return getattr(self, "nome", None) 
    
    def set_nome(self, nome):
        if nome is None or not nome.strip():
            raise ENomeVazio("O nome do usuário não pode ser vazio.")

        self.nome = nome