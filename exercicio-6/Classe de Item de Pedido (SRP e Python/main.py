from dataclasses import dataclass

class ValorInvalido(Exception): pass

@dataclass
class ItemPedido:
    nome_produto: str
    quantidade: int
    preco_unitario: float
    
    def __post_init__(self):
        if self.quantidade < 0: raise ValorInvalido("Quantidade não pode ser negativa.")
        if self.preco_unitario < 0: raise ValorInvalido("Preço não pode ser negativo.")
    
    def calcular_subtotal(self) -> float:
        return self.quantidade * self.preco_unitario

if __name__ == "__main__":
    try:
        item = ItemPedido("Cadeira", 3, 950.0)
        print(f"Subtotal: R$ {item.calcular_subtotal():.2f}")
        ItemPedido("Teste", -1, 100.0)  # Força erro
    except ValorInvalido as e:
        print(f"Erro: {e}")