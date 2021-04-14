#include "Cat.h"

Cat::Cat(unsigned short _age, double _hairLength, std::string _eyeColor) : Mammal(_age, _hairLength) {
    this->eyeColor = _eyeColor;
}

std::string Cat::GetEyeColor() const {
    return this->eyeColor;
}

Cat::~Cat() {
    std::cout << "Cat" << std::endl;
}
