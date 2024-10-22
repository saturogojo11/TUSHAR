//Single inheritance:
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

class Derived : public Base {
public:
    Derived(int x, int y) : Base(x, y) {}
    void product() {
        cout << "Product: " << a * b << endl;
    }
};

int main() {
    Derived d(5, 10);
    d.product();
    return 0;
}
