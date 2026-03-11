#include <bits/stdc++.h>
using namespace std;

class Student {

    public:
    string name;
    double* cgpaPtr; // Pointer to dynamically allocated memory for CGPA

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double; // Dynamically allocate memory for cgpa
        *cgpaPtr = cgpa; // Assign the value to the allocated memory
    }

    Student(Student &obj) {
        cout << "Copy constructor called" << endl;
        this-> name = obj.name;
        cgpaPtr = new double; // Allocate new memory for cgpa
        *cgpaPtr = *(obj.cgpaPtr); // Copy the value from the original object's cgpa pointer
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
        delete cgpaPtr; // Free the dynamically allocated memory
    }

    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Rahul", 9.5);
    s1.getinfo();

    cout << "-------------------------" << endl;

    Student s2(s1);
    s2.name = "Rohit"; // Changing name of s2
    *(s2.cgpaPtr) = 8.5; // Changing CGPA of s2
    s2.getinfo();

    cout << "-------------------------" << endl;
    s1.getinfo(); // s1 remains unchanged

    return 0;
}