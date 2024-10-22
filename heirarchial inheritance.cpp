#include <iostream>

using namespace std;

class Base {
public:
    int a, b;
    Base(int x, int y) {
        a = x;
        b = y;
    }
};

class Derived1 : public Base {
public:
    Derived1(int x, int y) : Base(x, y) {}
    void displayA() {
        cout << "First number: " << a << endl;
    }
};

class Derived2 : public Base {
public:
    Derived2(int x, int y) : Base(x, y) {}
    void displayB() {
        cout << "Second number: " << b << endl;
    }
};

int main() {
    Derived1 d1(10, 20);
    Derived2 d2(10, 20);
    d1.displayA();
    d2.displayB();
    return 0;
}
