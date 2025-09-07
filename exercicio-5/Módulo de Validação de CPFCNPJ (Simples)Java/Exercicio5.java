public class Exercicio5 {

    static class Invalido extends Exception {
        Invalido(String msg) { super(msg); }
    }

    static boolean valida(String doc, int tamanho) throws Invalido {
        String d = doc.replaceAll("\\D", "");
        if (d.length() != tamanho)
            throw new Invalido((tamanho == 11 ? "CPF" : "CNPJ") + " deve ter " + tamanho + " dígitos.");
        if (d.chars().distinct().count() <= 1)
            throw new Invalido((tamanho == 11 ? "CPF" : "CNPJ") + " inválido");
        return true;
    }

    static boolean CPFvalido(String cpf) throws Invalido { return valida(cpf, 11); }
    static boolean CNPJvalido(String cnpj) throws Invalido { return valida(cnpj, 14); }

    static void testa(String[] docs, boolean ehCPF) {
        for (String doc : docs) {
            try {
                boolean valido = ehCPF ? CPFvalido(doc) : CNPJvalido(doc);
                System.out.println(doc + " -> " + (ehCPF ? "CPF" : "CNPJ") + " válido " + valido);
            } catch (Invalido e) {
                System.out.println(doc + " -> Erro: " + e.getMessage());
            }
        }
    }

    public static void main(String[] args) {
        testa(new String[]{"123.456.789-09", "11111111111", "0123456789"}, true);
        testa(new String[]{"12.345.678/0001-95", "00000000000000", "123"}, false);
    }
}