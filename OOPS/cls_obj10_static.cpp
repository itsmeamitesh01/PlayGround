#include <iostream>
using namespace std;

class Demo {
    public:
        // Static data member
        static int cnt;
        Demo() {
            cnt++;
            cout << "Demo object created. Current count: " << cnt << endl;
        }


        // Static member function
        static int getCount() {
            return cnt;
        }
};

int Demo :: cnt = 0; // Definition of static member variable


//Static local variable examplecd ..
void func() {
    static int num = 0;
    num++;
    cout << "Static local variable num: " << num << endl;
}

int main() {
    cout << "(a) Static Local Variable :" << endl;
    for(int i = 0; i < 5; i++) {
        func(); // Call function to demonstrate static local variable
    }

    cout << "--------------------------" << endl;
    cout << "(b) Static Data Member :" << endl;
    Demo d1, d2; // Create two objects of Demo class
    cout << "Total Demo objects created: " << Demo::cnt << endl; // Access static member variable

    cout << "--------------------------" << endl;
    cout << "(c) Static Member Function :" << endl;
    Demo d3; // Create another object of Demo class
    Demo :: getCount(); // Call static member function
    cout << "Total Demo objects created using static function: " << Demo::getCount() << endl; // Access static member function
}