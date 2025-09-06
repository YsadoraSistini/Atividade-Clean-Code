import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        double[] lista = {0,0,0,0,0};

        System.out.println("Lista: ");
        System.out.print("{ ");
        for (int i = 0; i < lista.length; i++) {
            System.out.print(lista[i]+" , ");
        }
        System.out.println("}");

        System.out.println("Média: "+calcularMedia(lista));
        System.out.println("Menor número: "+ menorNumero(lista));
        System.out.println("Maior número: "+ maiorNumero(lista));
    }

    public static double calcularMedia(double[] lista){
        if(estaVazia(lista)){
           throw new IllegalStateException("Vetor Vazio!");
        }
        double soma = 0;
        for (int i = 0; i < lista.length; i++) {
            soma +=lista [i];
        }
        return soma/ lista.length;
    }

    public static double menorNumero(double[] lista){
        if(estaVazia(lista)){
            throw new IllegalStateException("Vetor Vazio!");
        }

        double menor = lista[0];
        for (int i = 0; i < lista.length; i++) {
            if(lista[i]<menor){
                menor = lista[i];
            }
        }
        return menor;
    }

    public static double maiorNumero(double[] lista){
        if(estaVazia(lista)){
            throw new IllegalStateException("Vetor Vazio!");
        }
        double maior = lista[0];
        for (int i = 0; i < lista.length; i++) {
            if(lista[i]>maior){
                maior = lista[i];
            }
        }
        return maior;
    }

    private static boolean estaVazia(double[]lista){
        for (int i = 0; i < lista.length; i++) {
            if(lista[i] != 0){
                return false;
            }
        }

        return true;
    }


}