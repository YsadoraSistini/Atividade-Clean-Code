import random
import string

def gerar_senha(tamanho: int, incluir_numeros: bool, incluir_simbolos: bool) -> str:
    if tamanho < 4 or tamanho > 30:
        raise Exception("O tamanho da senha deve ser entre 4 e 30.")

    caracteres_base = string.ascii_uppercase + string.ascii_lowercase

    if incluir_numeros:
        caracteres_base += string.digits
    if incluir_simbolos:
        caracteres_base += "!@#$%^&*()_-+=<>?"

    if not caracteres_base:
        raise Exception("Nenhum tipo de caractere selecionado para a senha.")

    return "".join(random.choice(caracteres_base) for _ in range(tamanho))