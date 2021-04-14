#include "Reptile.h"

Reptile::Reptile(unsigned short _age, bool _hasFeet) : Animal(_age) {
    this->hasFeet = true;
}

bool Reptile::GetHasFeet() const {
    return this->hasFeet;
}

Reptile::~Reptile() {
    std::cout << "Reptile" << std::endl;
}
