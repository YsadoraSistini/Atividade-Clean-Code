from Usuario import Usuario
from ExceptionUsuario import EIdadeInvalido, ENomeVazio

u = Usuario()

try:
    u.set_idade(19)
    print(f'Idade: {u.get_idade()}')

    u.set_idade(-19)
    print(f'Idade: {u.get_idade()}')
except EIdadeInvalido as e:
    print(f'Erro: {e}')

try:
    u.set_nome("Isabely")
    print(f'Nome: {u.get_nome()}')

    u.set_nome("")
    print(f'Nome: {u.get_nome()}')
except ENomeVazio as e:
    print(f'Erro: {e}')
