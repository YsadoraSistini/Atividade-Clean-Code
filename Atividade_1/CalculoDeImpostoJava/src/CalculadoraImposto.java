public class CalculadoraImposto {

    private double preco;
    private boolean ehAlimento;

    public CalculadoraImposto() {
    }

    public double calculadoraImposto(boolean ehAlimento, double preco) throws PrecoInvalidoException {
        if (preco < 0){
            throw new PrecoInvalidoException("O preço não pode ser negativo.");
        }
        if (ehAlimento){
            return preco * 0.05;
        }else {
            return preco * 0.10;
        }
    }
}
