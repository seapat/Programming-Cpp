#pragma once

#include "string"
#include "iostream"

class Animal {
private:
    unsigned short age;
public:
    Animal(unsigned short _age);
    virtual ~Animal();
    unsigned short GetAge() const;
    void SetAge(unsigned short _age);
};
