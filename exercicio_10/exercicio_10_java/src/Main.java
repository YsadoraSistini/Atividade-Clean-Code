import java.util.Random;

public class Main {
    public static void main(String[] args) {
        System.out.println(processarPagamento(1,"pIx"));
    }

    public static boolean processarPagamento(double valor, String metodoPagamento){
        Random random = new Random();
        int chance = random.nextInt(5);

        if(valor<=0){
            throw  new IllegalStateException("Valor de pagamento Inválido!");
        }
        if(!(metodoPagamento.equalsIgnoreCase("cartao") || metodoPagamento.equalsIgnoreCase("pix"))){
            throw  new IllegalStateException(("Forma de pagamento: "+metodoPagamento+" inválido!"));
        }

        if(chance==1){
            throw new ArithmeticException("Ocorreu um erro no processo de pagamento!");
        }

        System.out.println("Pagamento feito com sucesso!");
        return true;
    }
}