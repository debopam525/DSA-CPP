#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not a prime number." << endl;
        return 0;
    }

    if (num <= 3) {
        cout << num << " is a prime number." << endl;
        return 0;
    }

    if (num % 2 == 0 || num % 3 == 0) {
        cout << num << " is not a prime number." << endl;
        return 0;
    }

    int i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
            cout << num << " is not a prime number." << endl;
            return 0;
        }
        i += 6;
    }

    cout << num << " is a prime number." << endl;
    return 0;
}