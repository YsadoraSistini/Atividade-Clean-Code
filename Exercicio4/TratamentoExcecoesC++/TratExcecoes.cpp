#include <iostream>
#include <fstream>
#include <string>
#include <system_error>
#include <filesystem>
#include <vector>
#include <experimental/filesystem>

namespace fs = std::filesystem;

std::string lerConteudoArquivo(const std::string& nomeArquivo) {
    try {
        std::ifstream file(nomeArquivo, std::ios::binary);
        if (!file.is_open()) {
            return "ERRO: Arquivo não encontrado: " + nomeArquivo;
        }
        std::string conteudo((std::istreambuf_iterator<char>(file)), 
        std::istreambuf_iterator<char>());
        
        return conteudo;
        
    } catch (const std::system_error& e) {
        return "ERRO ao ler arquivo " + nomeArquivo + ": " + e.what();
    } catch (const std::exception& e) {
        return "ERRO inesperado ao ler arquivo " + nomeArquivo + ": " + e.what();
    }
}