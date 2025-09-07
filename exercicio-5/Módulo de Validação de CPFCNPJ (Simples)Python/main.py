import re

class Invalido(Exception): pass

def validar(doc: str, tipo: str, tam: int) -> bool:
    d = re.sub(r'\D', '', doc)
    if len(d) != tam: raise Invalido(f"{tipo} deve ter {tam} dígitos.")
    if not d.isdigit(): raise Invalido(f"{tipo} deve conter apenas dígitos.")
    if len(set(d)) == 1: raise Invalido(f"{tipo} inválido")
    return True

validar_cpf = lambda cpf: validar(cpf, "CPF", 11)
validar_cnpj = lambda cnpj: validar(cnpj, "CNPJ", 14)

if __name__ == "__main__":
    for t, fn, nome in [("123.456.789-09", validar_cpf, "CPF"), ("11111111111", validar_cpf, "CPF"), 
                        ("12.345.678/0001-95", validar_cnpj, "CNPJ"), ("00000000000000", validar_cnpj, "CNPJ")]:
        try: print(f"{t} -> {nome} válido {fn(t)}")
        except Invalido as e: print(f"{t} -> Erro: {e}")