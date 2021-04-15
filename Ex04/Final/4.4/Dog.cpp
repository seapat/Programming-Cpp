#include "Dog.h"

Dog::Dog(unsigned short _age, double _hairLength, float _kilosFoodPerDay) : Mammal(_age, _hairLength) {
    this->kilosFoodPerDay = _kilosFoodPerDay;
}

float Dog::GetKilosFoodPerDay() const {
    return this->kilosFoodPerDay;
}

void Dog::SetKilosFoodPerDay(float _kilosFoodPerDay) {
    this->kilosFoodPerDay = _kilosFoodPerDay;
}

Dog::~Dog() {
    std::cout << "Dog" << std::endl;
}
