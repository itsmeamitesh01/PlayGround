#include <iostream>
using namespace std;

class Shape {
    public:
        virtual void draw() = 0; // Pure virtual function

        void info() {
            cout << "This is a shape." << endl;
        }

        //Constructor and destructor
        Shape() {
            cout << "Shape created." << endl;
        } // Constructor

        virtual ~Shape() {
            cout << "Shape destroyed." << endl;
        } // Virtual destructor
};

class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawing a circle." << endl;
        }

        Circle() {
            cout << "Circle created." << endl;
        } // Constructor
        
        ~Circle() {
            cout << "Circle destroyed." << endl;
        } // Destructor
};

int main() {
 
    cout << "Dynamic Polymorphism Example" << endl;
    Shape *sh = new Circle();
    sh->draw(); // Calls Circle's draw method
    sh->info(); // Calls Shape's info method
    delete sh; // Clean up memory

    cout << "-------------------------" << endl;
    cout << "Static Polymorphism Example" << endl;
    
    Shape * pt; // Pointer to base class. Circle object will be created on the stack and assigned to it.
    Circle c; // Create a Circle object on the stack
    pt = &c; // Assign address of Circle object to base class pointer
    pt->draw(); // Calls Circle's draw method
    pt->info(); // Calls Shape's info method
    // No need to delete pt since it points to a stack object
}
