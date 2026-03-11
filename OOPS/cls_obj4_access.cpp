#include <bits/stdc++.h>
using namespace std;

class Person {

    public:
    string name;
    
    protected:
    int age;
    
    private:
    int roll;

    public:
    void setRoll(int roll) {
        this->roll = roll;
    }
    
    void setAge(int age) {
        this->age = age;
    }

    void getRoll() {
        cout << "Roll No" << roll << endl; // This will not be accessible outside the class
    }

    void getinfo() {
        cout << "Parent Class Information:" << endl;
        cout << "name: " << name  << endl;
        cout << "age: " << age << endl;
        cout << "roll: " << roll << endl;
    }
};

class Student : public Person {
    public:

    void age_set(int age) {
        setAge(age); // Accessing protected member through public method
    }

    void roll_set(int roll) {
        setRoll(roll); // Accessing private member through public method
    }

    void display() {
        cout << "Child Class Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age" << age << endl; 
        getRoll();
    }
};

int main() {
    Person p;
    p.name = "John"; // Accessible
    p.setAge(20); // Accessible, as setAge is a public method
    p.setRoll(5); // Accessible, as setRoll is a public method
    p.getinfo(); // Will not display roll as it is private

    cout << "-------------------------" << endl;


    Student s1;
    s1.name = "Alice"; // Accessible
    s1.age_set(22); // Accessible through public method
    s1.roll_set(10); // Accessible through public method
 
    s1.display();
    return 0;
}