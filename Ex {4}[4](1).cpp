#include<iostream>
using namespace std;

int max(int s, int p) {
    return (s > p) ? s : p;
}

int max(int s, int p, int x) {
    return max(max(s, p), x);
}

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "The maximum number is: " << max(num1, num2, num3) << endl;
    return 0;
}
