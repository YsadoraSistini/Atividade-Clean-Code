#include <iostream>
#include <stdexcept>
#include <string>

class TemperaturaInvalidaException : public std::runtime_error {
public:
    TemperaturaInvalidaException(const std::string& mensagem)
        : std::runtime_error(mensagem) {}
};

class TempConver {
public:
    static const double ZERO_CELSIUS;
    static const double ZERO_FAHRENHEIT;
    
    static double CelsiusToFahrenheit(double celsius) {
        if (celsius < ZERO_CELSIUS) {
            throw TemperaturaInvalidaException("Temperatura abaixo do zero absoluto (Celsius).");
        }
        return (celsius * 9.0 / 5.0) + 32.0;
    }
    
    static double FahrenheitToCelsius(double fahrenheit) {
        if (fahrenheit < ZERO_FAHRENHEIT) {
            throw TemperaturaInvalidaException("Temperatura abaixo do zero absoluto (Fahrenheit).");
        }
        return (fahrenheit - 32.0) * 5.0 / 9.0;
    }
};

const double TempConver::ZERO_CELSIUS = -273.15;
const double TempConver::ZERO_FAHRENHEIT = -459.67;