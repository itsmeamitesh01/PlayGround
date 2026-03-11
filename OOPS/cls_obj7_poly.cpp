#include <iostream>
using namespace std;

class Student {

    public:
    string name;


    // Constructor Overloading
    Student() {
        cout << "Non-parameterized constructor called" << endl;
    }

    Student(string name) {
        cout << "Parameterized constructor called" << endl;
        this->name = name;
    }

    // Function Overloading getinfo method
    void getinfo() {
        cout << "Name: " << name << endl;
    }

    void getinfo(string name) {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1; // Calls non-parameterized constructor
    s1.name = "Alice"; // Directly setting the name
    s1.getinfo(); // Calls getinfo method to display name
    s1.getinfo("Bob"); // Calls overloaded getinfo method with a parameter

    cout << "---------------------------------" << endl;
    
    Student s2("John"); // Calls parameterized constructor
    s2.getinfo(); // Calls getinfo method to display name
    s2.getinfo("Doe"); // Calls overloaded getinfo method with a parameter
    return 0;
}