
public class Usuario {

    private int idade;
    private String nome;


    public Usuario() {
    }


    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) throws EIdadeInvalido{
        if (idade < 0 || idade > 120){
            throw new EIdadeInvalido("A idade deve estar entre 0 e 120 anos.");
        }
        this.idade = idade;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) throws ENomeVazio{
        if (nome == null || nome.trim().isEmpty()) {
            throw new ENomeVazio("O nome do usuário não pode ser vazio.");
        }

        this.nome = nome;
    }
}
