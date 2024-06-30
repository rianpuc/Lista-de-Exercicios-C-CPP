#include <iostream>
#define PI 3.1415

class Circulo{
    private:
        int raio;
    public:
        Circulo(int raio):
        raio(raio){}
        Circulo(){}
        ~Circulo() = default;
        void setRaio(int raio){
            this->raio = raio;
        }
        int getRaio(){
            return raio;
        }
        double getArea(){
            return PI * raio * raio;
        }
        double getComp(){
            return 2 * PI * raio;
        }
};

int main(void){
    Circulo um;
    um.setRaio(15);
    Circulo dois(3);
    std::cout << "Circulo 1\nRaio: " << um.getRaio() << "\nArea: " << um.getArea() << "\nComprimento: " << um.getComp() << std::endl;
    std::cout << "Circulo 2\nRaio: " << dois.getRaio() << "\nArea: " << dois.getArea() << "\nComprimento: " << dois.getComp() << std::endl;
    return 0;
}