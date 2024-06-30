/* Desenvolver programa com C++ para computar se um boi está acima de peso fixado. Deverá
iniciar com uma classe tipo Boi. Para cada cada objeto boi declare os seguintes atributos (private)
(1 ponto): nome (string) e peso (double), e com os métodos (public) (10 pontos): 02 construtores
(um sem parâmetro com inicialização padrão; o outro com parâmetros para todos os atributos),
get/set para cada atributo, método exibe que mostra na saída padrão as informações atuais dos
atributos formatadas.
Implemente em C++ os seguintes módulos para manipulação desse objeto: */
/* 
• (4 pontos) um procedimento que recebe o objeto e o nome do arquivo de entrada, preenchendo
o objeto a partir dos dados lidos deste arquivo;
• (2 pontos) uma função que recebe o objeto e retorna 1 (true), caso o boi possua mais de 15
arrobas e, 0 (false), caso contrário. 
*/
/* No programa principal (4 pontos), declare um objeto do tipo Boi, leia o nome do arquivo de
entrada da informação e o nome do arquivo de saída, acione o procedimento e a função, gravando
no arquivo de saída uma das mensagens conforme o resultado da função (“Boi para venda”, “Boi
deve voltar para confinamento”). Em algum momento no programa principal as informações do
boi são exibidas. */

#include <iostream>
#include <string>
#include <fstream>

class Boi{
    private: 
        std::string nome;
        double peso;
    public:
        Boi(std::string nome, double peso):
        nome(nome), peso(peso){}
        Boi(){}
        ~Boi() = default;
        std::string getNome(){
            return nome;
        }
        double getPeso(){
            return peso;
        }
        void setNome(std::string nome){
            this->nome = nome;
        }
        void setPeso(double peso){
            this->peso = peso;
        }
        void imprime(){
            std::cout << "Nome do boi: " << nome << "\nPeso: " << peso << std::endl;
        }
};

bool checkPeso(Boi boi){
    if(boi.getPeso() > 15){
        return true;
    } else {
        return false;
    }
}

int main(void){
    Boi boi;
    std::string nome; float peso;
    std::ifstream input("boi_entrada.txt");
    if(!input.is_open()){
        std::cout << "Erro ao abrir o arquivo!\n";
        return 1;
    }
    getline(input, nome);
    input >> peso;
    input.close();
    boi.setNome(nome); boi.setPeso(peso);
    std::ofstream output("boi_saida.txt");
    if(checkPeso(boi)){
        output << "Boi para venda: " << boi.getNome() << std::endl;
    } else {
        output << "Boi deve voltar para confinamento: " << boi.getNome() << std::endl;
    }
    output.close();
    boi.imprime();
    return 0;
}