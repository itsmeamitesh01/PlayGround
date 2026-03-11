#include <iostream>
using namespace std;

class Animal {
    public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Dog : public Animal { 
    // Single Inheritance: Dog inherits from Animal. 
    // Dog class inherits the eat method from Animal
    public:
    void speak() {
        cout << "Dog barks" << endl;
    }
};

class Pup : public Dog {
    // Multilevel Inheritance: Pup inherits from Dog, which in turn inherits from Animal
    // Pup class inherits the eat method from Animal and the speak method from Dog
    public:
    void play() {
        cout << "Pup plays" << endl;
    }
};

class Cat : public Animal {
    // Hierarchical Inheritance: Cat inherits from Animal
    public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

class Zoo {
    //
    public:
    void place() {
        cout << "In zoo" << endl;
    }
};

class Lion : public Animal, public Zoo {
    public:
    void lives() {
        cout << "Lion lives in the zoo" << endl;
    }
};


int main() {
    Animal a;
    a.eat(); // Calls Animal's eat method

    cout << "-------------------------" << endl;

    Dog d;
    d.eat(); // Inherited method from Animal
    d.speak(); // Calls Dog's speak method

    cout << "-------------------------" << endl;

    Pup p;
    p.eat(); // Inherited method from Animal
    p.speak(); // Inherited method from Dog
    p.play(); // Calls Pup's play method

    cout << "-------------------------" << endl;

    Cat c;
    c.eat(); // Inherited method from Animal
    c.meow(); // Calls Cat's meow method

    cout <<"-------------------------" << endl;

    Lion l;
    l.eat(); // Inherited method from Animal
    l.place(); // Inherited method from Zoo
    l.lives(); // Calls Lion's lives method

    return 0;
}