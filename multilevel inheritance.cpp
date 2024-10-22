#include <iostream>

using namespace std;

class Base {
public:
    int a;
    Base(int x) {
        a = x;
    }
};

class Derived1 : public Base {
public:
    int b;
    Derived1(int x, int y) : Base(x) {
        b = y;
    }
};

class Derived2 : public Derived1 {
public:
    Derived2(int x, int y) : Derived1(x, y) {}
    void sum() {
        cout << "Sum: " << a + b << endl;
    }
};

int main() {
    Derived2 d(10, 20);
    d.sum();
    return 0;
}
