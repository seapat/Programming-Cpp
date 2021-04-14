#pragma once

#include "Mammal.h"

class Cat : public Mammal {
private:
    std::string eyeColor;
public:
    Cat(unsigned short _age, double _hairLength, std::string _eyeColor);
    ~Cat() override;
    std::string GetEyeColor() const;
};
