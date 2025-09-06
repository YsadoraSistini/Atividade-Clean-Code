public class Main {
    public static void main(String[] args) throws EIdadeInvalido, ENomeVazio{

        Usuario usuario = new Usuario();

        try {


            usuario.setIdade(19);
            System.out.println("Idade: "+ usuario.getIdade());

            usuario.setIdade(-5);
            System.out.println("Idade: "+ usuario.getIdade());


        }catch (EIdadeInvalido e){
            System.out.println("Erro: "+e.getMessage());
        }


        try {
            usuario.setNome("Isa");
            System.out.println("Nome: "+ usuario.getNome());

            usuario.setNome(" ");
            System.out.println("Nome: "+ usuario.getNome());

        }catch (ENomeVazio e){
            System.out.println("Erro: "+e.getMessage());
        }
    }
}