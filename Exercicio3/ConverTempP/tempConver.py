def celsius_to_fahrenheit(celsius):
    if celsius < -273.15:
        raise ValueError("Temperatura abaixo do zero absoluto (Celsius).")
    return (celsius * 9 / 5) + 32

def fahrenheit_to_celsius(fahrenheit):
    if fahrenheit < -459.67:
        raise ValueError("Temperatura abaixo do zero absoluto (Fahrenheit).")
    return (fahrenheit - 32) * 5 / 9