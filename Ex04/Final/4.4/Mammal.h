#pragma once

#include "Animal.h"

class Mammal : public Animal {
private:
    double hairLength;
public:
    Mammal(unsigned short _age, double _hairLength);
    ~Mammal() override;
    double GetHairLength() const;
    void SetHairLength(double _hairLength);
};
