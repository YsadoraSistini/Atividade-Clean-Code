#include <iostream>
#include <chrono>

long calcularDiferencaDias(std::tm dataInicial, std::tm dataFinal) {
    std::time_t t1 = std::mktime(&dataInicial);
    std::time_t t2 = std::mktime(&dataFinal);

    if (t1 > t2) {
        throw std::runtime_error("A data inicial não pode ser posterior à data final.");
    }

    return std::difftime(t2, t1) / (60 * 60 * 24);
}