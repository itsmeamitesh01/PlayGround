#include <bits/stdc++.h>
using namespace std;

class Teacher {
// Data members / Properties / Attibutes

// Access Specifier: private, public, protected
// private: Members are accessible only within the class
// public: Members are accessible from outside the class
// protected: Members are accessible within the class and by derived classes
// In this case, salary is private and cannot be accessed directly outside the class

private:
    double salary;

public:

    string name;
    string dept;
    string subject;
    int exp = 0;
    
    // Constructor
    
    // Non parameterized constructor
    Teacher() {
        dept = "Computer Science"; //  Default value for dept
        cout << "Hi, I am Non-para constructor of Teacher class" << endl;
    }   

    // parameterized constructor    
    Teacher(string name, string dept, string subject, double salary) {
        cout << "Hi, I am Para constructor of Teacher class" << endl;

        this->name = name; // Using 'this' pointer to refer to the current object's members
        // 'this' pointer is used to avoid ambiguity between member variables and parameters
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // Copy constructor
    Teacher(Teacher &org_obj) { //Pass by reference
        cout << "Hi, I am Custom-Copy constructor of Teacher class" << endl;

        this->name = org_obj.name; // Using 'this' pointer to refer to the current object's members
        this->dept = org_obj.dept;
        this->subject = org_obj.subject;
        this->salary = org_obj.salary;
        this->exp = org_obj.exp; // Copying experience from the original object
    } 
    //Member functions / Methods
    void changeDept(string newDept) {
        dept = newDept;
    }

    // Setter Fucntion
    void setSalary(double newSalary) {
        salary = newSalary;
    }

    // Getter Function
    double getSalary() {
        return salary;
    }

    void getinfo(){
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Experience: " << exp << " years" << endl;
        cout << "Salary: " << salary << endl;
    }
};
 

int main() {
    // Creating an object of the Teacher class
    Teacher t1; // Non-parameterized constructor is called here
    
    t1.name = "John Doe";  
    // t1.dept = "Mathematics"; 
    t1.subject = "Algebra";
    t1.setSalary(55000); 
    // t1.getinfo();
    
    cout << "------------------------" << endl;

    Teacher t2("Alex", "CSE", "Maths", 50000); // Parameterized constructor is called here
    t2.getinfo();

    cout << "------------------------" << endl;

    Teacher t3(t1); // Copy constructor is called here
    t3.exp = 5; // Setting experience for t
    t3.getinfo();

    cout << "------------------------" << endl;

    Teacher t4(t2); // Copy constructor is called here
    t4.exp = 3; // Setting experience for t4
    t4.getinfo();
    return 0;
}