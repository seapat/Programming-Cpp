#include "Animal.h"

Animal::Animal(unsigned short _age) {
    this->age = _age;
}

unsigned short Animal::GetAge() const {
    return this->age;
}

void Animal::SetAge(unsigned short _age) {
    this->age = _age;
}

Animal::~Animal() {
    std::cout << "Animal" << std::endl;
}
