#pragma once

#include "Reptile.h"

class Alligator : public Reptile {
private:
    unsigned short numberOfTeeth;
public:
    Alligator(unsigned short _age, unsigned short _numberOfTeeth);
    ~Alligator() override;
    unsigned short GetNumberOfTeeth() const;
    void SetNumberOfTeeth(unsigned short _numberOfTeeth);
};
