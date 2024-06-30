/* Uma clínica veterinária deseja automatizar seu processo de cadastro de animais. Sabe-se que os
animais são documentados por nome, tipo, peso e se possui deficiência. Desenvolva um programa
em C++ com a classe Animais para realizar tal cadastro, contendo: */

/* a) variáveis privadas nome (string), nomeDono (string), tipo (string), peso (float) e def (bool); */
/* b) construtor e destrutor; */
/* c) “getters” e “setters”; */
/* d) programa principal. */

#include <iostream>
#include <string>

class Animal{
    private:
        std::string nome;
        std::string nomeDono;
        std::string tipo;
        float peso;
        bool def;
    public:
        Animal(std::string nome, std::string nomeDono, std::string tipo, float peso, bool def):
        nome(nome), nomeDono(nomeDono), tipo(tipo), peso(peso), def(def){}
        Animal(){}
        ~Animal() = default;
        std::string getNome(){
            return nome;
        }
        std::string getNomeDono(){
            return nomeDono;
        }
        std::string getTipo(){
            return tipo;
        }
        float getPeso(){
            return peso;
        }
        bool getDef(){
            return def;
        }
        void imprime(){
            std::cout << "Nome: " << nome << "\nNome do Dono: " << nomeDono << "\nTipo: " << tipo << "\nPeso: " << peso << "\nDeficiente: " << (def ? "Sim" : "Nao") << std::endl;
        }
        void setNome(std::string nome){
            this->nome = nome;
        }
        void setNomeDono(std::string nomeDono){
            this->nomeDono = nomeDono;
        }
        void setTipo(std::string tipo){
            this->tipo = tipo;
        }
        void setPeso(float peso){
            this->peso = peso;
        }
        void setDef(bool def){
            this->def = def;
        }
};

int main(void){
    Animal cachorro("Rex", "Joao", "Cachorro", 23, false);
    Animal gato;
    gato.setNome("Titi");
    gato.setNomeDono("Flavia");
    gato.setTipo("Gato");
    gato.setPeso(11);
    gato.setDef(true);
    cachorro.imprime();
    gato.imprime();
    return 0;
}