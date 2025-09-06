public class Main {
    public static void main(String[] args) throws PrecoInvalidoException {

        CalculadoraImposto imposto = new CalculadoraImposto();

        try {
            double calculo1 = imposto.calculadoraImposto(true, 100);
            System.out.println("Imposto (alimento): "+ calculo1);

            double calculo2 = imposto.calculadoraImposto(false, 200);
            System.out.println("Imposto (geral): "+ calculo2);

            double calculo3 = imposto.calculadoraImposto(false, -200);
            System.out.println("Imposto (negativo): "+ calculo3);

        }catch(PrecoInvalidoException e){
            System.out.println("Erro: "+e.getMessage());
        }

    }
}