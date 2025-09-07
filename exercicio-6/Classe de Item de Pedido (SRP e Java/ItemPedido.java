public record ItemPedido(String nomeProduto, int quantidade, double precoUnitario) {

    public static class ValorInvalido extends RuntimeException {
        public ValorInvalido(String msg) { super(msg); }
    }

    public ItemPedido {
        if (quantidade < 0) throw new ValorInvalido("Quantidade não pode ser negativa.");
        if (precoUnitario < 0) throw new ValorInvalido("Preço não pode ser negativo.");
    }

    public double calcularSubtotal() { return quantidade * precoUnitario; }

    public static void main(String[] args) {
        try {
            var item = new ItemPedido("Notebook", 2, 3500.0);
            System.out.printf("Subtotal: R$ %.2f%n", item.calcularSubtotal());
            new ItemPedido("Teste", -1, 100.0);
        } catch (ValorInvalido e) {
            System.out.println("Erro: " + e.getMessage());
        }
    }
}