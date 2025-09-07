from datetime import date

def calcular_diferenca_dias(data_inicial: date, data_final: date) -> int:
    if data_inicial > data_final:
        raise Exception("A data inicial não pode ser posterior à data final.")
    return (data_final - data_inicial).days