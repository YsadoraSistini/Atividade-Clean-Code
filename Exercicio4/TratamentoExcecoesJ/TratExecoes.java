package Exercicio4.TratamentoExcecoesJ;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.NoSuchFileException;
import java.nio.file.Path;
import java.nio.file.Paths;

public class TratExecoes {
      public static String lerConteudoArquivo(String nomeArquivo) {
        try {
            Path path = Paths.get(nomeArquivo);
            return new String(Files.readAllBytes(path));
        } catch (NoSuchFileException e) {
            return "ERRO: Arquivo não encontrado: " + nomeArquivo;
        } catch (IOException e) {
            return "ERRO ao ler arquivo " + nomeArquivo + ": " + e.getMessage();
        }
    }
}

