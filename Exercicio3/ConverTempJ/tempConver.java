public class tempConver {
    
    public static final double ZERO_CELSIUS = -273.15;
    public static final double ZERO_FAHRENHEIT = -459.67;
    
    public static double CelsiusToFahrenheit(double celsius) {
        if (celsius < ZERO_CELSIUS) {
            throw new TemperaturaInvalidaException("Temperatura abaixo do zero absoluto (Celsius).");
        }
        return (celsius * 9 / 5) + 32;
    }
    
    public static double FahrenheitToCelsius(double fahrenheit) {
        if (fahrenheit < ZERO_FAHRENHEIT) {
            throw new TemperaturaInvalidaException("Temperatura abaixo do zero absoluto (Fahrenheit).");
        }
        return (fahrenheit - 32) * 5 / 9;
    }
}

class TemperaturaInvalidaException extends RuntimeException {
    public TemperaturaInvalidaException(String mensagem) {
        super(mensagem);
    }
}

