#include <iostream>
using namespace std;

class A {
public:
    void funcA() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void funcB() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
public:
    void funcC() {
        cout << "Class C" << endl;
    }
};

int main() {
    C obj;
    obj.funcA();
    obj.funcB();
    obj.funcC();
}