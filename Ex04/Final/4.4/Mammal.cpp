#include "Mammal.h"

Mammal::Mammal(unsigned short _age, double _hairLength) : Animal(_age){
    this->hairLength = _hairLength;
}

double Mammal::GetHairLength() const {
    return this->hairLength;
}

void Mammal::SetHairLength(double _hairLength) {

}

Mammal::~Mammal() {
    std::cout << "Mammal" << std::endl;
}
