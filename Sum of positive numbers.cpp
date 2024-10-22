// Sum of positive numbers in an array using copy constructor:
#include <iostream>

using namespace std;

class SumArray {
public:
    int arr[10];
    SumArray(int a[]) {
        for (int i = 0; i < 10; i++) {
            arr[i] = a[i];
        }
    }
    void calculateSum() {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        cout << "Sum of positive numbers: " << sum << endl;
    }
};

int main() {
    int arr[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    SumArray s(arr);
    s.calculateSum();
    return 0;
}
