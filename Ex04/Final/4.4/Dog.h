#pragma once

#include "Mammal.h"

class Dog : public Mammal {
private:
    float kilosFoodPerDay;
public:
    Dog(unsigned short _age, double _hairLength, float _kilosFoodPerDay);
    ~Dog() override;
    float GetKilosFoodPerDay() const;
    void SetKilosFoodPerDay(float _kilosFoodPerDay);
};
