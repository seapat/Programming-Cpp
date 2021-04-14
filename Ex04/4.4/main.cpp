#include <iostream>
#include "Cat.h"
#include "Dog.h"
#include "Alligator.h."

int main() {
    Cat* c1 = new Cat(2, 1.0, "green");
    Cat* c2 = new Cat(13, 0.3, "blue");
    Dog* d = new Dog(7, 2.2, 1.2);
    Alligator* a1 = new Alligator(20, 5);
    Alligator* a2 = new Alligator(12, 8);
    Alligator* a3 = new Alligator(2, 9);

    Animal* animals[6] = {c1, c2, d, a1, a2, a3};

    for(int i = 0; i < sizeof(animals)/sizeof(*animals); i++) {
        std::cout << animals[i]->GetAge() << std::endl;
    }

    for(int i = 0; i < sizeof(animals)/sizeof(*animals); i++) {
        delete animals[i];
    }

    return 0;
}
