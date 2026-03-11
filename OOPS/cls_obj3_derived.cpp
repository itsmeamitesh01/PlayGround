#include <bits/stdc++.h>
using namespace std;

class Person {

    public:
    string name;
    int age;

    Person(string name, int age) {
        cout << "Person Parameterized constructor called" << endl;
        this->name = name;
        this->age = age;
    }

    Person() {
        cout << "Non parameterized constructor called" << endl;
    }

    ~Person() {
        cout << "Person Destructor called" << endl;
    }
};

class Student : public Person {
    // name, age, roll number
    // but we already have name and age in Person class
    // so we can use inheritance
    public:

    int rollNumber;

    Student(string name, int age, int rollNumber) : Person(name, age) {
        cout << "Student parameterized constructor called" << endl;
        this->rollNumber = rollNumber;
    }

    Student() : Person() {
        cout << "Student non-parameterized constructor called" << endl;
    }

    ~Student() {
        cout << "Student Destructor called" << endl;
    }

    void getinfo() {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "roll number: " << rollNumber << endl;
    }
};


int main() {
    
    Student s1("John", 20, 101);
    s1.getinfo();

    cout << "--------------------" << endl;
    
    Student s2;
    s2.name = "Alice";
    s2.age = 22;
    s2.rollNumber = 102;

    s2.getinfo();

    cout << "--------------------" << endl;
    return 0;
}