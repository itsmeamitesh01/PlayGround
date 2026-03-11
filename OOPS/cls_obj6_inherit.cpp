#include <iostream>
using namespace std;

class Animal {
    public:
    void eat() {
        cout << "Animal eats" << endl;
    }
    
    Animal() {
        cout << "Animal object created" << endl;
    }

    ~Animal() {
        cout << "Animal object destroyed" << endl;
    }
};

class Mammal : virtual public Animal {
    public:
    void walk() {
        cout << "Mammal walks" << endl;
    }

    Mammal() {
        cout << "Mammal object created" << endl;
    }

    ~Mammal() {
        cout << "Mammal object destroyed" << endl;
    }
};

class Pet : virtual public Animal {
    public:
    void play() {
        cout << "Pet plays" << endl;
    }

    Pet() {
        cout << "Pet object created" << endl;
    }

    ~Pet() {
        cout << "Pet object destroyed" << endl;
    }
};

class Dog : public Mammal, public Pet {
    public:
    void bark() {
        cout << "Dog barks" << endl;
    }

    Dog() {
        cout << "Dog object created" << endl;
    }

    ~Dog() {
        cout << "Dog object destroyed" << endl;
    }
};

int main() {
    Dog d;
    cout << "-------------------------" << endl;

    d.Mammal :: eat(); // Inherited from Animal
    d.eat(); // Inherited from Animal
    d.walk(); // Inherited from Mammal
    d.play(); // Inherited from Pet
    d.bark(); // Dog's own method

    cout << "-------------------------" << endl;

    return 0;
}