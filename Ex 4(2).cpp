#include <iostream>
using namespace std;

inline int multi(int num1, int num2) {
    return num1 * num2;
}

int main() {
    int num1, num2;
    cout << "Enter a first digit: ";
    cin >> num1;
    cout << "Enter a second digit: ";
    cin >> num2;

    int result = multi(num1, num2);
    cout << "multi is: " << result << endl;

    return 0;
}
