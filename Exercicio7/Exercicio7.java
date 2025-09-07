import java.security.SecureRandom;

public class Exercicio7 {

    private static final String LETRAS_MAIUSCULAS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    private static final String LETRAS_MINUSCULAS = "abcdefghijklmnopqrstuvwxyz";
    private static final String NUMEROS = "0123456789";
    private static final String SIMBOLOS = "!@#$%^&*()_-+=<>?";

    public static String gerarSenha(int tamanho, boolean incluirNumeros, boolean incluirSimbolos) throws Exception {
        if (tamanho < 4 || tamanho > 30) {
            throw new Exception("O tamanho da senha deve ser entre 4 e 30.");
        }

        StringBuilder caracteresBase = new StringBuilder();
        caracteresBase.append(LETRAS_MAIUSCULAS).append(LETRAS_MINUSCULAS);

        if (incluirNumeros) {
            caracteresBase.append(NUMEROS);
        }
        if (incluirSimbolos) {
            caracteresBase.append(SIMBOLOS);
        }

        if (caracteresBase.length() == 0) {
            throw new Exception("Nenhum tipo de caractere selecionado para a senha.");
        }

        SecureRandom random = new SecureRandom();
        StringBuilder senha = new StringBuilder();

        for (int i = 0; i < tamanho; i++) {
            int index = random.nextInt(caracteresBase.length());
            senha.append(caracteresBase.charAt(index));
        }

        return senha.toString();
    }
}
