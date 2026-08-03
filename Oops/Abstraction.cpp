#include <iostream>
using namespace std;

// Abstract class
class Vehicle {
public:
    virtual void start() = 0;  // Pure virtual function
};

// Derived class
class Car : public Vehicle {
public:
    void start() override {
        cout << "Car is starting..." << endl;
    }
};

int main() {
    Car c;
    c.start();

    return 0;
}