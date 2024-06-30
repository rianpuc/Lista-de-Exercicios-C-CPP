/* Na linguagem C++, o getline é uma função da biblioteca string que permite receber uma linha
inteira de caracteres (incluindo espaços) e armazená-la em uma variável do tipo string. Sua
sintaxe consiste em “getline(entrada, variavel)”, sendo “entrada” o meio por onde os caracteres
serão recebidos e “variavel” a variável do tipo string que receberá os caracteres. */

#include <iostream>
#include <fstream>
#include <string>

int main(void){
    std::ifstream arquivo("entrada.txt");
    if(!arquivo.is_open()){
        std::cout << "Erro ao abrir o arquivo!\n";
        return 1;
    }
    std::string inputTeclado;
    std::string inputArquivo;
    std::cout << "Digite algo: ";
    getline(std::cin, inputTeclado);
    getline(arquivo, inputArquivo);
    std::cout << "Entrada do teclado: " << inputTeclado << std::endl;
    std::cout << "Entrada do arquivo: " << inputArquivo << std::endl;
    arquivo.close();
    return 0;
}