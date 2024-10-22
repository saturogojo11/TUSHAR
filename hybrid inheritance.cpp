#include <iostream>

using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class C : public A {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};

class D : public A {
public:
    void displayD() {
        cout << "Class D" << endl;
    }
};

class E : public B {
public:
    void displayE() {
        cout << "Class E" << endl;
    }
};

int main() {
    A a;
    B b;
    C c;
    D d;
    E e;

    a.displayA();
    b.displayA();
    b.displayB();
    c.displayA();
    c.displayC();
    d.displayA();
    d.displayD();
    e.displayA();
    e.displayB();
    e.displayE();
    return 0;
}
