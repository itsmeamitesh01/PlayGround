#include <iostream>
using namespace std;

class Animal {
    public:
    virtual void eat() {
        cout << "Animal eats" << endl;
    }
};

class Dog : public Animal {
    public:
    void eat() override {
        cout << "Dog eats bone" << endl;
    }
};

class Cat : public Animal {
    public:
    void eat() override {
        cout << "Cat eats treats" << endl;
    }
};

int main() {

    cout << "Using polymorphism with pointers:" << endl;
    Animal *aniPtr; // Pointer of type Animal
    Dog d; // Object of type Dog
    Cat c; // Object of type Cat

    aniPtr = &d; // Assign Dog object to Animal pointer
    aniPtr->eat(); // Calls Dog's eat method

    aniPtr = &c; // Assign Cat object to Animal pointer
    aniPtr->eat(); // Calls Cat's eat method

    cout << "---------------------------------" << endl;
    cout << "Using an array of Animal pointers:" << endl;

    Animal *animalPtr[2]; // Array of Animal pointers
    Dog d_obj; // Object of type Dog
    Cat c_obj; // Object of type Cat

    animalPtr[0] = &d_obj; // Assign Dog object to first element
    animalPtr[1] = &c_obj; // Assign Cat object to second element

    for(int i = 0; i < 2; i++) {
        animalPtr[i] -> eat(); // Calls the speak method of each object
    }

    return 0;
}