#include <iostream>

using namespace std;

class Base1 {
public:
    int a;
    Base1(int x) {
        a = x;
    }
};

class Base2 {
public:
    int b;
    Base2(int y) {
        b = y;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived(int x, int y) : Base1(x), Base2(y) {}
    void sum() {
        cout << "Sum: " << a + b << endl;
    }
};

int main() {
    Derived d(10, 20);
    d.sum();
    return 0;
}
