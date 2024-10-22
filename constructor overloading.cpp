#include <iostream>

using namespace std;

class Sum {
public:
    Sum(int a, int b) {
        cout << "Sum of integers: " << a + b << endl;
    }
    Sum(float a, float b) {
        cout << "Sum of floats: " << a + b << endl;
    }
    Sum(char a, char b) {
        cout << "Sum of characters: " << (int)a + (int)b << endl;
    }
};

int main() {
    Sum s1(10, 20), s2(1.5, 2.5), s3('A', 'B');
    return 0;
}
