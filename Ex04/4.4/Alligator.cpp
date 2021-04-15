#include "Alligator.h"

Alligator::Alligator(unsigned short age, unsigned short numberOfTeeth) : Reptile(age, true) {
    this->numberOfTeeth = numberOfTeeth;
}

unsigned short Alligator::GetNumberOfTeeth() const {
    return this->numberOfTeeth;
}

void Alligator::SetNumberOfTeeth(unsigned short _numberOfTeeth) {
    this->numberOfTeeth = _numberOfTeeth;
}

Alligator::~Alligator() {
    std::cout << "Alligator" << std::endl;
}
