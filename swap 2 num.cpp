//Swap two numbers using parameterized constructor:
#include <iostream>

using namespace std;

class Swap {
public:
    int a, b;
    Swap(int x, int y) {
        a = x;
        b = y;
    }
    void swapNumbers() {
        int temp = a;
        a = b;
        b = temp;
    }
    void displayNumbers() {
        cout << "After swapping: a = " << a << ", b = " << b << endl;
    }
};

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    Swap s(x, y);
    s.swapNumbers();
    s.displayNumbers();
    return 0;
}
