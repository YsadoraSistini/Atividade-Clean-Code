from CalculadoraImposto import CalculadoraImposto
from PrecoInvalidoException import PrecoInvalidoException

calc = CalculadoraImposto() 

try:
    imposto = calc.calcular_imposto(True, 100)
    print(f'Imposto(Alimento): {imposto}')

    imposto2 = calc.calcular_imposto(False, 200)
    print(f'Imposto(Geral): {imposto2}')

    imposto3 = calc.calcular_imposto(False, -200)
    print(f'Imposto(negativo): {imposto3}')
except PrecoInvalidoException as e:
    print(f'Erro: {e}')
