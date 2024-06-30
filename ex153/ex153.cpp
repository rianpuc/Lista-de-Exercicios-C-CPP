/* Crie uma classe chamada “Ponto” que representa um ponto no espaço tridimensional. A classe
deve ter os seguintes atributos privados: “x”, “y” e “z”, representando as coordenadas do ponto.
Implemente os métodos públicos necessários para definir e obter as coordenadas do ponto (getters
e setters), bem como um método para calcular a distância entre dois pontos. Em seguida, crie
objetos da classe “Ponto” e demonstre o uso desses métodos. */

#include <iostream>
#include <string>
#include <cmath>

class Ponto{
    private:
        double x;
        double y;
        double z;
    public:
        Ponto(){}
        ~Ponto() = default;
        void setX(double x){
            this->x = x;
        }
        void setY(double y){
            this->y = y;
        }
        void setZ(double z){
            this->z = z;
        }
        double getX(){
            return x;
        }
        double getY(){
            return y;
        }
        double getZ(){
            return z;
        }
        void getDistancia(Ponto b){
            std::cout << "Distancia dos pontos: " << sqrt(pow((x-b.getX()),2) + pow((y-b.getY()), 2) + pow((z-b.getZ()),2));
        }
};

int main(void){
    Ponto p1;
    p1.setX(15);
    p1.setY(23);
    p1.setZ(4);
    Ponto p2;
    p2.setX(18);
    p2.setY(51);
    p2.setZ(13);
    p1.getDistancia(p2);
    return 0;
}
