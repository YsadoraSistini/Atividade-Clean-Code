import java.time.LocalDate;
import java.time.temporal.ChronoUnit;

public class Exercicio8 {

    public static long calcularDiferencaDias(LocalDate dataInicial, LocalDate dataFinal) throws Exception {
        if (dataInicial.isAfter(dataFinal)) {
            throw new Exception("A data inicial não pode ser posterior à data final.");
        }
        return ChronoUnit.DAYS.between(dataInicial, dataFinal);
    }
}