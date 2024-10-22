//. Sum of first n natural numbers using default constructor:
#include <iostream>

using namespace std;

class Sum {
public:
    int n;
    Sum() {
        cout << "Enter a positive integer: ";
        cin >> n;
    }
    void calculateSum() {
        int sum = n * (n + 1) / 2;
        cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    Sum s;
    s.calculateSum();
    return 0;
}
