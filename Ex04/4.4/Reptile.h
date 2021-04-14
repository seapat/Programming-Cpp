#pragma once

#include "Animal.h"

class Reptile : public Animal {
private:
    bool hasFeet;
public:
    Reptile(unsigned short _age, bool _hasFeet);
    ~Reptile() override;
    bool GetHasFeet() const;
};
